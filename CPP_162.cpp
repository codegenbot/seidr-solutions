#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>

std::string string_to_md5(const std::string& text);

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    EVP_MD_CTX* mdctx;
    const EVP_MD* md = EVP_md5();
    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, text.c_str(), text.length());

    unsigned char md_value[EVP_MAX_MD_SIZE];
    unsigned int md_len;
    EVP_DigestFinal_ex(mdctx, md_value, &md_len);
    EVP_MD_CTX_free(mdctx);

    BIO* bio = BIO_new(BIO_s_mem());
    BIO_write(bio, md_value, md_len);

    char* output;
    BIO_get_mem_data(bio, &output);

    std::string result(output, md_len * 2); // Convert binary data to hexadecimal string

    BIO_free(bio);

    return result;
}