#include <string>
#include <openssl/md5.h>
#include <openssl/ssl.h>
#include <openssl/engine.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const unsigned char* input = (const unsigned char*)text.c_str();
    size_t len = text.size();

    MD5_Update(&ctx, input, len);
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5[i]);
        result += buffer;
    }

    return result;

}

int main() {
    SSL_library_init();
    EVP_add_global_lock(EVP_LOCK_M_NOW);
}