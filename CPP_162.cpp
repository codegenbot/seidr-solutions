#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/ssl.h>
#include <openssl/engine.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    stringstream ss;

    MD5_CTX* ctx = new MD5_CTX;
    MD5_CTX tmpctx;
    EVP_MD_CTX* ectx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ectx, NULL, 0);
    EVP_DigestUpdate(ectx, text.c_str(), text.size());
    EVP_DigestFinal_ex(ectx, md, NULL);

    delete ctx;
    EVP_MD_CTX_free(ectx);

    for (int i = 0; i < 16; ++i) {
        ss << setfill('0') << setw(2) << hex << (int)md[i];
    }

    return ss.str();
}