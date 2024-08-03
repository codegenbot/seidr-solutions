#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5((unsigned char*)text.c_str(), text.size(), result);

    string md5 = "";
    for (int i = 0; i < 16; i++) {
        sprintf("%02x", &result[i]);
        md5 += string(1, (char)result[i]);
    }

    return md5;
}