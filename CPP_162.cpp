#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    MD5_CTX md5ctx;
    unsigned char result[16];
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.size());
    MD5_Final(result, &md5ctx);

    std::stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << std::setfill(2) << std::setw(2) << std::hex << static_cast<int>(result[i]);
    }
    
    return ss.str();
}