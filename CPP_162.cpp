#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/err.h>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    stringstream ss;

    EVP_MD_CTX ctx;
    EVP_MD *md_algorithm = EVP_md5();
    EVP_DigestInit(&ctx, md_algorithm);
    EVP_DigestUpdate(&ctx, text.c_str(), text.size());
    unsigned char *digest = EVP_DigestFinal(&ctx, NULL, NULL);
    if (digest != NULL) {
        for (int i = 0; i < 16; ++i) {
            ss << setfill('0') << setw(2) << hex << (int)digest[i];
        }
    }
    OPENSSL_free(digest);
    OPENSSL_free(md_algorithm); // Corrected line
    return ss.str();
}