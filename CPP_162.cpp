#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    unsigned char result[16];
    MD5((unsigned char*)text.c_str(), text.length(), result);
    string output;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", result[i]);
        output.append(buffer);
    }
    return output;
}