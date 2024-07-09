#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    unsigned char* c = reinterpret_cast<unsigned char*>(text.c_str());
    size_t len = text.length();
    EVP_MD_CTX mdctx;
    EVP_MD *mdav = EVP_md5();
    unsigned char *d;
    int i;

    EVP_DigestInit(&mdctx, mdav);
    EVP_DigestUpdate(&mdctx, c, len);
    EVP_DigestFinal_ex(&mdctx, md, &i);

    string result;
    for (int j=0; j<16; ++j) {
        char buff[3];
        sprintf(buff, "%02x", md[j]);
        result += string(buff);
    }
    
    return result;
}