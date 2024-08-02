#include <openssl/ssl.h>
#include <openssl/err.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char buffer[1024];
    string result;
    EVP_MD_CTX mdctx;
    EVP_MD *md = NULL;
    const EVP_MD* digest = NULL;
    unsigned char hash[16];

    // Initialize the context
    EVP_MD_CTX_init(&mdctx);

    // Set the algorithm to MD5
    if ((digest = EVP_get_digestbyname("MD5")) == NULL) {
        return "";
    }

    // Set the message digest initialization function for this type of message.
    if (1 != EVP_DigestInit_ex(&mdctx, digest, NULL)) {
        return "";
    }

    // Update the message digest context with the data
    const char *p = text.c_str();
    size_t len = text.length();
    if ((len > sizeof(buffer) - 1) || (1 != EVP_DigestUpdate(&mdctx, p, len))) {
        return "";
    }

    // Finalize the message digest
    if (1 != EVP_DigestFinal_ex(&mdctx, hash, NULL)) {
        return "";
    }

    // Convert the binary hash to hexadecimal
    for(int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        result.append(string(buffer));
    }

    EVP_MD_CTX_cleanup(&mdctx);

    return result;
}