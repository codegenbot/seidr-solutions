#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char buffer[1024];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char result[16];
    
    OPENSSL_init_crypto(NULL, NULL);
    
    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, result, NULL);
    
    string output;
    for (int i = 0; i < 16; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    
    OPENSSL_cleanup();
    
    return output;
}