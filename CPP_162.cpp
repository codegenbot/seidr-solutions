#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), result);
    
    string md5_hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }
    
    return md5_hash;
}