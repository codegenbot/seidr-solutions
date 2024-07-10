#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX mdctx;
    EVP_MD *mdav = EVP_md5();
    unsigned char *d = NULL;
    size_t len = 0;

    EVP_DigestInit_ex(&mdctx, mdav, 0);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, md, &len);

    string result = "";
    for (size_t i = 0; i < len; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += buf;
    }

    return result;
}