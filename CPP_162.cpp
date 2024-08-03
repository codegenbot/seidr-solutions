#include <string>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((unsigned char*)text.c_str(), text.size(), result);

    string md5 = "";
    for (int i = 0; i < 16; i++) {
        md5 += std::setiosflags(std::ios::hex) << (int)result[i] << resetiosflags(std::ios);
    }

    return md5;
}