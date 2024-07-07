#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    EVP_MD_CTX mdctx;
    EVP_MD *mdalg;
    unsigned char *d = NULL;
    size_t len;
    const EVP_MD *md_evp = EVP_sha1();
    BIO *bio;

    // Initialize the EVP_MD_CTX structure.
    if (1 != EVP_DigestInit_ex(&mdctx, md_evp, NULL))
        return "";

    bio = BIO_new(BIO_s_file());
    BIO_set_fp(bio, fopen("input.txt", "r"), BIO_NOCLOSE);

    // Set the message to be digested.
    if (1 != EVP_DigestUpdate(&mdctx, text.c_str(), text.size()))
        return "";

    // Finalize the message digest computation.
    if (1 != EVP_DigestFinal_ex(&mdctx, md, &len))
        return "";

    BIO_free(bio);

    char *result = new char[len];
    for(int i=0; i < len; i++) {
        sprintf(result + i*2, "%02x", md[i]);
    }
    return string(result);
}