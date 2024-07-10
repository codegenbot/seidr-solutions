#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char* ptr = text.c_str();
    size_t len = text.size();

    while(len > 0) {
        MD5_Update(&md5, ptr, len > 64 ? 64 : len);
        ptr += 64;
        len -= 64;
    }
    MD5_Final(buffer, &md5);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)buffer[i];
    }

    return ss.str();
}