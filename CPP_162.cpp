#include "digest.h"

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.size(), md);
    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        hexdump(md[i], 2, &ss);
    }
    return ss.str();
}