#include <string>
#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md);

    string result;
    for (int i = 0; i < 16; ++i)
        sprintf(result + "%02x", &md[i]);

    return result;
}