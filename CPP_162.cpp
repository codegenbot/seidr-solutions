#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md5);

    string hash;
    for(int i = 0 ; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << (int)md5[i];
        hash += ss.str();
    }
    
    return hash;
}