#include <cassert>
#include <string>
#include <openssl/evp.h>
#include <openssl/bio.h>

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX *mdctx = EVP_MD_CTX_new();
    EVP_DigestInit(mdctx, EVP_md5());

    EVP_DigestUpdate(mdctx, str.c_str(), str.length());

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);

    EVP_MD_CTX_free(mdctx);

    char mdString[33] = {'\0'};
    for (int i = 0; i < md_len; i++)
        sprintf(&mdString[i*2], "%02x", md_value[i]);
    
    return mdString;
}

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}