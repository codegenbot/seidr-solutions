#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

#define MD5_DIGEST_LENGTH 16

using namespace std;

string string_to_md5(const string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    EVP_Digest((unsigned char*)text.c_str(), text.length(), digest, NULL, EVP_md5(), NULL);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
    }

    return string(mdString);
}