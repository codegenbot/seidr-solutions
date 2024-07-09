#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP_md5();
    const void *d = text.c_str();
    size_t len = text.size();
    
    EVP_MD_CTX_init(&md_ctx);
    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, d, len);
    EVP_DigestFinal_ex(&md_ctx, result, NULL);
    EVP_MD_CTX_cleanup(&md_ctx);
    
    string output;
    for (int i = 0; i < 16; ++i) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    
    return output;
}