#include <iostream>
#include <iomanip>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5((const unsigned char*)text.c_str(), text.length(), md5);
    
    ostringstream oss;
    for(int i = 0; i < 16; ++i)
        oss << setfill('0') << setw(2) << hex << (int)md5[i];
    return oss.str();
}