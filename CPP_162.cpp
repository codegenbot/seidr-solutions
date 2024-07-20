#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    const unsigned char *d = reinterpret_cast<const unsigned char*>(text.c_str());
    size_t len = text.size();

    EVP_MD_CTX_init(&mdctx);
    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, d, len);
    EVP_DigestFinal_ex(&mdctx, result, reinterpret_cast<unsigned char*>(&len));
    EVP_MD_CTX_cleanup(&mdctx);

    string output;
    for (int i = 0; i < 16; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << static_cast<int>(result[i]);
        output += ss.str();
    }

    return output;
}