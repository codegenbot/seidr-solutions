#include <openssl/evp.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* ctx;
    const EVP_MD* md;

    unsigned int md_len;
    unsigned char md_value[EVP_MAX_MD_SIZE];

    md = EVP_md5();
    ctx = EVP_MD_CTX_new();

    EVP_DigestInit_ex(ctx, md, NULL);
    EVP_DigestUpdate(ctx, text.c_str(), text.length());
    EVP_DigestFinal_ex(ctx, md_value, &md_len);

    EVP_MD_CTX_free(ctx);

    char mdString[33];
    for (int i = 0; i < 16; i++) {
        sprintf(&mdString[i * 2], "%02x", (unsigned int)md_value[i]);
    }
    mdString[32] = '\0'; // Add null terminator at the end

    return mdString;
}