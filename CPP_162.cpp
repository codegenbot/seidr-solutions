#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char buffer[16];
    MD5_CTX md5Context;
    MD5_Init(&md5Context);
    const char* cstr = text.c_str();
    size_t len = text.size();
    MD5_Update(&md5Context, cstr, len);
    MD5_Final(buffer, &md5Context);

    stringstream ss;
    for (size_t i = 0; i < 16; ++i) {
        ss << setfill(2) << setw(2) << hex << static_cast<int>(buffer[i]);
    }

    return ss.str();
}