#include<string>
#include<openssl/ssl.h>
#include<openssl/x509v3.h>

string string_to_md5(string text) {
    if(text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned const char*)text.c_str(), text.size(), result);

    stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf("%02x", &result[i]);
        ss << hex << result[i];
    }
    return ss.str();
}