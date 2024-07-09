#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[16];
    MD5_CTX ctx;
    const unsigned char* textBytes = text.c_str();
    int textLength = text.length();

    MD5_Init(&ctx);
    MD5_Update(&ctx, textBytes, textLength);
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        result.append(buff);
    }

    return result;
}