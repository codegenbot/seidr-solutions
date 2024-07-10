#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &ctx);

    string output;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        output += buffer;
    }

    return output;
}