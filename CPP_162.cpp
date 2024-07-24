#include <openssl/ssl.h>
#include <openssl/engine.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md[16];
    stringstream ss;

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
    using namespace std;
    cout << string_to_md5("password") << endl;
    assert(string_to_md5("password") == "5d41402abc4ec9a8fc1c771f8de5ade");
    return 0;
}