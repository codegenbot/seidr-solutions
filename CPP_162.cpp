```c++
#include <string>
#include <openssl/md5.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5(text.c_str(), text.size(), md5);
    
    stringstream ss;
    for (int i = 0; i < 16; ++i)
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)md5[i];
    
    return ss.str();
}