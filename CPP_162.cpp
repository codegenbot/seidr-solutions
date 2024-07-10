#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[16];
    EVP_MD_CTX ctx;
    const EVP_MD *md_algorithm = EVP_md5();
    unsigned char* input = reinterpret_cast<unsigned char*>(text.c_str());
    int len = text.length();
    int i;

    EVP_DigestInit_ex(&ctx, md_algorithm, NULL);
    EVP_DigestUpdate(&ctx, input, len);
    EVP_DigestFinal_ex(&ctx, md, &len);

    string result;
    for(i=0; i<16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }
    return result;
}