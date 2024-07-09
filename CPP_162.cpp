#include <openssl/ssl.h>
#include <openssl/sha.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    SSL_library_init();
    OpenSSL_add_all_algorithms();

    unsigned char result[16];
    MD5((const unsigned char*)text.c_str(), text.size(), result);

    string md5_hash;
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5_hash += buff;
    }

    return md5_hash;
}