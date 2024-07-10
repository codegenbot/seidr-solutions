#include <algorithm>

string string_to_md5(string text) {
    if(text.empty()) return "";

    MD5_CTX ctx;
    unsigned char result[16];
    MD5_Init(&ctx);

    const char* str = text.c_str();
    size_t len = text.size();

    MD5_Update(&ctx, str, len);
    MD5_Final(result, &ctx);

    string md5Hash;
    for(int i=0; i<16; i++){
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5Hash += buff;
    }

    return md5Hash;
}