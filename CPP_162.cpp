#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

std::string string_to_md5(std::string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    // Add the implementation of MD5 function or include the necessary header file that contains it
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    std::string result;
    for(int i = 0; i < 16; ++i){
        stringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}