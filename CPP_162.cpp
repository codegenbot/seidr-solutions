#include <iostream>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char *txt = text.c_str();
    size_t txt_len = text.size();
    MD5_Update(&ctx, txt, txt_len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        sprintf(result + 2 * i + 1, "%02x", md5[i]);
    }
    
    return result;
}