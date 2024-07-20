#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char md5[16];
    string result;

    if (text.empty()) {
        return "None";
    }

    MD5_Init(&ctx);
    const char* cstr = text.c_str();
    MD5_Update(&ctx, cstr, text.size());
    MD5_Final(md5, &ctx);

    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", md5[i]);
        result += string(temp);
    }

    return result;
}