```cpp
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);
    
    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return ss.str();
}