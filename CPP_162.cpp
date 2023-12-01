#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.length(), digest);

    char md5String[33];
    for(int i = 0; i < 16; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5String;
}