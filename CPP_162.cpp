#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = strlen(input);

    MD5_Update(&ctx, input, len);
    size_t md_len = 16; 
    MD5_Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += string(buffer);
    }

    return result;
}