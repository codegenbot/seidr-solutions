#include <digest.h>

string string_to_md5(string text) {
    if(text.empty()) return "";
    unsigned char md5[16];
    MD5((unsigned char*)text.c_str(), text.size(), md5);
    stringstream ss;
    for(int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
    }
    return ss.str();
}