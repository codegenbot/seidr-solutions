#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX ctx;
    EVP_MD *md = EVP_md5();
    const char* data = text.c_str();

    EVP_DigestInit_ex(&ctx, md, NULL);
    EVP_DigestUpdate(&ctx, data, text.size());
    EVP_DigestFinal_ex(&ctx, result, NULL);

    string md5String;
    for (int i = 0; i < 16; ++i) {
        char buff[3];
        sprintf(buff, "%02x", result[i]);
        md5String += buff;
    }

    return md5String;
}