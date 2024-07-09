#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[MD5_DIGEST_LENGTH];
    EVP_MD_CTX ctx;
    EVP_MD *md_obj = EVP_md5();
    unsigned char input[1024];

    int i = 0;
    while ((i = text.size() - 1023) > -1)
        memcpy(input, text.substr(i).c_str(), 1024);
    if (text.size() > 1023)
        strcpy((char*)input, text.substr(1023).c_str());
    else
        *(input + text.size()) = '\0';
    EVP_DigestUpdate(&ctx, input, strlen(input));
    EVP_DigestFinal_CTX(&ctx, md);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    return oss.str();
}