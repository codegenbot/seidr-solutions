#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), md);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << hex << setfill('0') << fixed << setw(2) << (int)md[i];
    }

    return oss.str();
}