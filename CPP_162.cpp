#include <string>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    const void *d = text.c_str();
    size_t len = text.size();

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, d, len);
    EVP_DigestFinal_ex(&mdctx, result, NULL);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
    }

    return ss.str();
}