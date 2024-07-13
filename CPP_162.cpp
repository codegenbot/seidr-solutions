#include<string>
#include<openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), hash);
    
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        printf("%02x", hash[i]);
    }
    return "";
}