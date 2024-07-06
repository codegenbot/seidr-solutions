#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const unsigned char *ptr = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();
    MD5_Update(&md5ctx, ptr, len);
    MD5_Final(md5, &md5ctx);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return ss.str();
}