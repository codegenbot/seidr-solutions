#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[16];
    MD5((unsigned char*)text.c_str(), text.size(), md);

    stringstream ss;
    for(int i = 0; i < 16; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}