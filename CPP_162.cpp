#include <cassert>
#include <string>
#include <openssl/md5.h>
#include <openssl/evp.h>
#include <openssl/bio.h>
#include <openssl/buffer.h>

std::string string_to_md5(const std::string& str) {
    EVP_MD_CTX *mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char digest[EVP_MAX_MD_SIZE];
    unsigned int digest_len;

    mdctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(mdctx, md, NULL);
    EVP_DigestUpdate(mdctx, str.c_str(), str.length());
    EVP_DigestFinal_ex(mdctx, digest, &digest_len);
    EVP_MD_CTX_free(mdctx);

    std::string result;
    BIO *bmem = BIO_new(BIO_s_mem());
    BIO_write(bmem, digest, digest_len);
    BUF_MEM *bptr;
    BIO_get_mem_ptr(bmem, &bptr);

    result.assign(bptr->data, bptr->data + bptr->length);

    BIO_free_all(bmem);

    return result;
}

int test_main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}