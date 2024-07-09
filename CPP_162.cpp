```cpp
#include <string>
#include <openssl/ssl.h>
#include <openssl/crypto.h>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char* data = (unsigned char*)text.c_str();
    unsigned char md5[16];
    EVP_md5(data, text.size(), &md5);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;
}