```cpp
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    unsigned char* ptr = NULL;
    EVP_MD_CTX ctx;
    EVP_MD *mdalg;

    // Initialize the EVP context and message digest algorithm
    EVP_MD_CTX_init(&ctx);
    mdalg = EVP_md5();

    // Calculate the MD5 hash of the input string
    if (1 == EVP_DigestInit_ex(&ctx, mdalg, NULL) &&
        1 == EVP_DigestUpdate(&ctx, text.c_str(), text.size()) &&
        1 == EVP_DigestFinal_ex(&ctx, md, &ptr)) {
        // Convert the MD5 hash to a hexadecimal string
        string result;
        for (int i = 0; i < 16; ++i) {
            char buf[3];
            sprintf(buf, "%02x", md[i]);
            result += buf;
        }
        return result;
    } else {
        // Return None if the input string is empty or an error occurred
        return "";
    }

    EVP_MD_CTX_cleanup(&ctx);
}