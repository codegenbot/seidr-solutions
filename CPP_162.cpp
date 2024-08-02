#include <string>
#include <sstream>
#include <iomanip> // Include iomanip for setfill() and setw()
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX* md_ctx;
    unsigned char hash[16];
    unsigned int hash_len = 0;

    OpenSSL_add_all_algorithms();
    OpenSSLErrorStack *err = error_get_system_error_stack();

    if (!(md_ctx = EVP_MD_CTX_new())) {
        // Handle error
    }

    if (1 != EVP_DigestInit_ex(md_ctx, EVP_md5(), NULL)) {
        // Handle error
    }
    if (1 != EVP_DigestUpdate(md_ctx, text.c_str(), text.size())) {
        // Handle error
    }
    if (1 != EVP_DigestFinal_ex(md_ctx, hash, &hash_len)) {
        // Handle error
    }

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << setw(2) << static_cast<int>(hash[i]);
    }

    return ss.str();
}