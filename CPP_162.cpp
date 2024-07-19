#include <openssl/evp.h>
#include <openssl/md5.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    EVP_MD_CTX* ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(ctx, EVP_md_md5(), NULL);
    const char* ptr = text.c_str();
    while (*ptr) {
        EVP_DigestUpdate(ctx, &(*ptr), 1);
        ptr++;
    }
    unsigned char* md5_ptr = (unsigned char*)malloc(MD5_DIGEST_LENGTH);
    EVP_DigestFinal_ex(ctx, md5_ptr, NULL);
    EVP_MD_CTX_free(ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md5_ptr[i]);
        result += buf;
    }

    free(md5_ptr);
    return result;
}

int main() {
    // No-op
}