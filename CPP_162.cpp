#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    unsigned char* data = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.size();
    MD5_CTX ctx;
    MD5Init(&ctx);
    MD5Update(&ctx, &data[0], len);
    MD5Final(md, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    
    return result;
}