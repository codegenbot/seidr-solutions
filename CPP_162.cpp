#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    EVP_MD_CTX md_ctx;
    unsigned char hash[MD5_DIGEST_LENGTH];
    const EVP_MD* md = EVP_md5();
    unsigned char input[256];
    int len = 0, i = 0;

    string result;
    for (char c : text) {
        input[i] = c;
        i++;
        len = i;
    }

    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, input, len);
    EVP_DigestFinal_ex(&md_ctx, hash, &len);

    for (int j = 0; j < MD5_DIGEST_LENGTH; j++) {
        char buff[3];
        sprintf(buff, "%02x", hash[j]);
        result += buff;
    }
    
    return result;
}