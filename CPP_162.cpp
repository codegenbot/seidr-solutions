#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX mdctx;
    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&mdctx, (const unsigned char*)text.c_str(), text.size());
    unsigned char md[16];
    unsigned int len;
    EVP_DigestFinal_ex(&mdctx, md, &len);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }

    return result;
}