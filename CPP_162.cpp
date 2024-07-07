#include <string>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    string result(32, '0');
    for (int i = 0; i < 16; ++i)
        sprintf(result.c_str() + i * 2, "%02x", md5[i]);

    return result;
}