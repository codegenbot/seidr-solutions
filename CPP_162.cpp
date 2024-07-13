#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    size_t length = text.size();
    MD5_Update(&mdContext, str, length);
    MD5_Final(buffer, &mdContext);

    stringstream ss;
    for (int i = 0; i < 16; ++i) {
        if (i == 4 || i == 9 || i == 14) 
            ss << "\\";
        ss << printf("%02x", buffer[i]);
    }

    return ss.str();
}