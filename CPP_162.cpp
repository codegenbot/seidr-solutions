```c++
#include <iostream>
#include <string>
#include <openssl/evp.h>
#include <openssl/md5.h>

using namespace std;

std::string string_to_md5(std::string text) {
    EVP_MD_CTX* mdctx;
    unsigned char md[16];
    std::string str = text;  
    unsigned int len = str.length();

    if (len == 0)
        return "";

    if ((mdctx = EVP_MD_CTX_new()) == NULL)
        return "";
    if (1 != EVP_DigestInit_ex(mdctx, EVP_md5(), NULL))
        return "";
    if (1 != EVP_DigestUpdate(mdctx, str.c_str(), len))
        return "";
    unsigned char mdSig[EVP_MAX_BLOCK_LENGTH];
    int len_output = EVP_DigestFinal_ex(mdctx, mdSig, &len);
    EVP_MD_CTX_free(mdctx);

    std::string result;
    for (int i = 0; i < len; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", mdSig[i]);
        result += string(buffer);
    }
    return result;
}

int main() {
    cout << string_to_md5("password") << endl;
}