```cpp
#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char buffer[1024];
    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP_get_md("MD5");
    unsigned char hash[16];

    if (!EVP_DigestInit_ex(&md_ctx, md, NULL)) {
        return "";
    }
    if (1 != EVP_DigestUpdate(&md_ctx, text.c_str(), text.size())) {
        return "";
    }

    int size;
    if (!EVP_DigestFinal_ex(&md_ctx, hash, &size)) {
        return "";
    }

    ostringstream oss;
    for (int i = 0; i < 16; i++) {
        oss << hex << setfill('0') << fixed << setw(2) << (int)hash[i];
    }
    return oss.str();
}