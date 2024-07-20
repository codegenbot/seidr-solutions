#include <string>
#include <vector>
#include <algorithm>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    while(len > 0){
        MD5_Update(&ctx, ptr, (int)min((long long)len, sizeof(md5)));
        len -= sizeof(md5);
        ptr += sizeof(md5);
    }
    MD5_Final(md5, &ctx);
    
    std::string result;
    for(int i = 0; i < 16; ++i){
        char c = (md5[i] >> 4) + ((md5[i] >> 4) > 9 ? 'a' - 10 : '0');
        result.push_back(c);
        c = md5[i] & 15;
        c += ((c > 9) ? ('a' - 10) : ('0'));
        result.push_back(c);
    }
    
    return result;
}