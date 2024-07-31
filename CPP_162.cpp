#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX mdctx;
    EVP_PKEY key;
    const EVP_MD* evp_md;

    // Initialize the EVP context
    EVP_MD_CTX_init(&mdctx);

    // Set the digest algorithm to MD5
    evp_md = EVP_get_digestbyname("MD5");
    EVP_DigestInit_ex(&mdctx, evp_md, NULL);

    // Update the EVP context with the input string
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());

    // Finalize the EVP context to get the hash value
    EVP_DigestFinal_ex(&mdctx, md, &ptr);

    // Convert the hash value to a hexadecimal string
    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md[i]);
        result += buffer;
    }

    return result;
}