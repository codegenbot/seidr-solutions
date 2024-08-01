#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    EVP_MD_CTX md_ctx;
    unsigned char hash[16];
    unsigned int hash_len;
    
    if (!EVP_DigestInit_ex(&md_ctx, EVP_md5(), nullptr)) return "";
    if (!EVP_DigestUpdate(&md_ctx, text.c_str(), text.size())) return "";
    if (!EVP_DigestFinal_ex(&md_ctx, hash, &hash_len)) return "";
    
    ostringstream oss;
    for (int i = 0; i < 16; ++i) {
        oss << setfill('0') << setw(2) << hex << (int)hash[i];
    }
    
    return oss.str();
}