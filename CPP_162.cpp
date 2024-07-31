#include<string>
#include<openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md[16];
    EVP_MD_CTX md_ctx;
    const EVP_MD* md_type = EVP_md5();
    const void* data = text.c_str();
    size_t data_len = text.length();

    EVP_DigestInit_ex(&md_ctx, md_type, 0);
    EVP_DigestUpdate(&md_ctx, data, data_len);
    EVP_DigestFinal_ex(&md_ctx, md, nullptr);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        result += string(buf);
    }

    return result;
}