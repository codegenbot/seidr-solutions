#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), md5);
    
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}