#include<openssl/md5.h>
#include<iomanip>
#include<sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    std::md5(text.c_str(), text.size(), md5);
    
    string result;
    for(int i = 0; i < 16; ++i){
        std::ostringstream ss;
        ss << std::hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}