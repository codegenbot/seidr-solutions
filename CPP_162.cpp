```cpp
#include <string>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[16];
    EVP_MD_CTX md_ctx;
    const EVP_MD* md = EVP_sha1();
    unsigned char* sig = 0;
    size_t sig_len = 0;

    EVP_MD_CTX_init(&md_ctx);
    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, (const unsigned char*)text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, md5, &sig_len);

    stringstream ss;
    for (int i = 0; i < sig_len; i++) {
        ss << setfill('0') << setw(2) << hex << (int)md5[i];
    }

    return ss.str();
}