#include <string>
using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    std::string result;
    for(int i = 0; i < 16; ++i){
        stringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}