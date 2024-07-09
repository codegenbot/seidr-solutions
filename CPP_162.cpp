#include<string>
#include<openssl/md5.h>
#include<sstream>
#include<iomanip>

using namespace std;
using namespace OpenSSL;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    string result;
    for(int i = 0; i < 16; ++i){
        ostringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}