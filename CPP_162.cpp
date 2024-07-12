#include <openssl/evp.h>
#include <string>
#include <sstream>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX ctx;
    unsigned char mdBuffer[16];
    stringstream ss;
    EVP_MD_CTX* ctx2 = EVP_MD_CTX_new();
    EVP_MD_CTX_init(ctx2);
    EVP_DigestInit_ex(ctx2, EVP_md5(), NULL);
    EVP_DigestUpdate(ctx2, text.c_str(), text.size());
    unsigned char mdValue[EVP_MAX_BLOCK_LENGTH];
    int outLen;
    EVP_DigestFinal_ex(ctx2, mdValue, &outLen);

    for (int i = 0; i < outLen; i++) {
        sprintf(&ss.str()[0], "%02x", (char)mdValue[i]);
        ss.seekp(0);
    }

    EVP_MD_CTX_free(ctx2);

    return ss.str();
}