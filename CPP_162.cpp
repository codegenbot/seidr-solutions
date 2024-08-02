#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char md[16];
    unsigned char* p = NULL;
    EVP_MD_CTX ctx;
    EVP_MD *mdav;
    const EVP_MD *md;

    // Create the context
    EVP_MD_CTX_init(&ctx);

    // Set the digest algorithm to MD5
    mdav = EVP_md5();
    if (!EVP_DigestInit_ex(&ctx, mdav, NULL)) {
        return "Error";
    }

    // Convert string to bytes
    const char* textBytes = text.c_str();
    size_t textSize = text.size();

    // Update the context with the input
    if (!EVP_DigestUpdate(&ctx, textBytes, textSize)) {
        return "Error";
    }

    // Finalize the digest
    if (!EVP_DigestFinal_ex(&ctx, md, &p)) {
        return "Error";
    }

    EVP_MD_CTX_cleanup(&ctx);

    // Convert bytes to hexadecimal string
    stringstream ss;
    for (int i = 0; i < 16; i++) {
        char buff[3];
        sprintf(buff, "%02x", md[i]);
        ss << buff;
    }

    return ss.str();
}