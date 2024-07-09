#include <string>
#include <sstream>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md);
    
    stringstream ss;
    for (int i = 0; i < 16; ++i)
        ss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    
    return ss.str();
}