```cpp
#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

std::string string_to_md5(std::string text) {
    EVP_MD_CTX* mdctx;
    unsigned char md[16];
    string str = text;  
    size_t len = str.length();

    if (len == 0)
        return "";

    OpenSSL_add_all_algorithms();
    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(mdctx, str.c_str(), len);
    unsigned char mdSig[EVP_MAX_BLOCK_LENGTH];
    int len_output = EVP_DigestFinal_ex(mdctx, mdSig, &len);
    EVP_MD_CTX_free(&mdctx);

    string result;
    for (int i = 0; i < len; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", mdSig[i]);
        result += buffer;
    }
    return result;
}

int main() {
    cout << string_to_md5("password") << endl;
    return 0;
}