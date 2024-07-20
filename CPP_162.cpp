#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    EVP_MD_CTX md_ctx;
    unsigned char hash[MD5_DIGEST_LENGTH];
    const EVP_MD* md = EVP_md5();
    unsigned char buffer[text.length()];
    for (int i = 0; i < text.length(); i++) {
        buffer[i] = text[i];
    }
    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, buffer, text.length());
    EVP_DigestFinal_ex(&md_ctx, hash, NULL);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result += buff;
    }
    return result;
}