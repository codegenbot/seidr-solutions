#include <openssl/ssl.h>
#include <openssl/x509v3.h>

string string_to_md5(string text) {
    unsigned char md5[16];
    const EVP_MD* evp_md = EVP_md5();
    unsigned char* input = (unsigned char*)text.c_str();
    int len = text.length();
    unsigned int input_len = len;
    
    MD5_CTX ctx;
    MD5Init(&ctx);
    MD5Update(&ctx, input, input_len);
    MD5Final(md5, &ctx);

    string result;
    for(int i=0; i<16; i++) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }
    
    return result;
}