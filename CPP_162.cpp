#include <string>
#include <sstream>
#include <iomanip> // Include iomanip for setfill() and setw()
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX* md_ctx;
    unsigned char hash[16];
    unsigned int hash_len = 0;

    if (!(md_ctx = EVP_MD_CTX_new())) {
        return "";
    }

    if (!EVP_DigestInit_ex(md_ctx, EVP_md5(), NULL)) {
        EVP_MD_CTX_free(md_ctx);
        return "";
    }
    
    if (!EVP_DigestUpdate(md_ctx, text.c_str(), text.size())) {
        EVP_MD_CTX_free(md_ctx);
        return "";
    }

    if (!EVP_DigestFinal_ex(md_ctx, hash, &hash_len)) {
        EVP_MD_CTX_free(md_ctx);
        return "";
    }

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << (int)hash[i];
    }

    EVP_MD_CTX_free(md_ctx);

    return ss.str();
}