#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    EVP_MD_CTX md_ctx;
    const EVP_MD *md = EVP_get_md_by_name("MD5");
    unsigned char hash[16];

    int len = 0;

    // Create MD5 context
    EVP_MD_CTX_init(&md_ctx);
    EVP_DigestInit_ex(&md_ctx, md, NULL);

    // Add the text to the MD5 context
    const unsigned char* data = (const unsigned char*)text.c_str();
    size_t data_len = text.size();

    EVP_DigestUpdate(&md_ctx, data, data_len);

    // Get the hash value
    EVP_DigestFinal_ex(&md_ctx, hash, &len);
    EVP_MD_CTX_cleanup(&md_ctx);

    string md5_hash;
    for (int i = 0; i < len; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        md5_hash += string(buffer);
    }

    return md5_hash;
}