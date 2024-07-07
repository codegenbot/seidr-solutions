#include <string>
#include <algorithm>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* ptr = text.c_str();
    size_t len = text.length();
    while(len > 0 && len <= 1024-1) {
        MD5_Update(&ctx, (unsigned char*)ptr, len);
        ptr += len; len = 0;
    }
    if (len > 0) {
        unsigned char* buffer = new unsigned char[1024];
        memcpy(buffer, ptr, len);
        memset(&buffer[len], 0, 1024-len);
        MD5_Update(&ctx, buffer, 1024-1);
        delete[] buffer;
    }
    MD5_Final(md5, &ctx);

    string result(32, '0');
    for(int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", md5[i]);
        result.replace(i*2, 2, temp);
    }
    return result;
}