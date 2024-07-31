#include <iostream>
#include <string>
#include <crypto++/md5.h>

using namespace std;
using namespace CryptoPP;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    MD5 hash;
    string result;
    
    const char* str = text.c_str();
    size_t len = strlen(str);
    byte digest[MD5::DIGEST_SIZE];
    
    hash.Update((byte*)str, len);
    hash.Final(digest);
    
    for (int i = 0; i < MD5::DIGEST_SIZE; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)digest[i];
        result += ss.str();
    }
    
    return result;
}