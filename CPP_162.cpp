#include <string>
#include <sstream>
#include <openssl/evp.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    std::stringstream ss;

    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_MD *md_algorithm = EVP_md5();
    EVP_DigestInit(md_ctx, md_algorithm);
    EVP_DigestUpdate(md_ctx, text.c_str(), text.size());
    unsigned char *digest = EVP_DigestFinal(md_ctx, NULL, NULL);
    if (digest != NULL) {
        for (int i = 0; i < 16; ++i) {
            ss << setfill('0') << setw(2) << hex << (int)digest[i];
        }
    }
    OPENSSL_free(digest);
    EVP_MD_CTX_free(md_ctx);
    return ss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
}