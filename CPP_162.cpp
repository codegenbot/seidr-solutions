#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    unsigned char md[16];
    MD5((const unsigned char*)text.c_str(), text.size(), md);
    string result;
    for (int i = 0; i < 16; ++i)
        sprintf(result + 2*i, "%02x", md[i]);
    return result.empty() ? "" : result;
}