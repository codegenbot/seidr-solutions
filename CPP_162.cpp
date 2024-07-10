```
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((unsigned char *)text.c_str(), text.size(), result);
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << setw(2) << (int)result[i];
    }
    return ss.str();
}