#include <iomanip>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    unsigned int* p = reinterpret_cast<unsigned int*>(&ctx);
    for(int i=0; i < len/4; ++i) {
        MD5_Update(&ctx, (const unsigned char*)&str[i*4], 4);
    }
    if(len%4!=0)
        MD5_Update(&ctx, (const unsigned char*)&str[(len/4)*4], len%4);
    MD5_Final(md5,&ctx);

    string res = "";
    for(int i=0; i<16; ++i) {
        sprintf(res+"%02x", md5[i]);
    }
    return res;
}