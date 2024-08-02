#include <string>
#include <openssl/ssl.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    MD5_CTX md5;
    unsigned char result[16];
    const EVP_MD *md = EVP_md5();
    const EVP_DIGEST_CTX *digest_ctx = EVP_digest_ctx_new(md);
    EVP_DigestInit_ex(digest_ctx, NULL, NULL);
    EVP_DigestUpdate_ex(digest_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(digest_ctx, result, NULL);

    ostringstream oss;
    for (int i = 0; i < 16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}