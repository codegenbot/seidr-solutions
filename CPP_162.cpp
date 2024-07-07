#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX ctx;
    EVP_MD *mdalg;
    const EVP_MD* digest;

    // Initialize the EVP MD context
    EVP_MD_CTX_init(&ctx);

    // Get the SHA1 message digest algorithm
    mdalg = EVP_sha256();

    // Set the message digest algorithm for the context
    EVP_DigestInit_ex(&ctx, mdalg, NULL);

    // Update the context with the input string
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());

    // Finalize the context and get the hash value
    EVP_DigestFinal_ex(&ctx, md, &ptr);

    // Convert the hash value to a hexadecimal string
    string result;
    for (int i = 0; i < 16; i++) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }

    return result;
}