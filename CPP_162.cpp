#include <digest.h>
#include <string>
#include <sstream>

extern "C" {
    #include <openssl/evp.h>
}

using namespace std;

const int MD5_DIGEST_LENGTH = 16;

string string_to_md5(string text) {
    if (text.empty()) return "";

    EVP_MD_CTX md_ctx;
    EVP_MD_CTX_init(&md_ctx);

    const EVP_MD* evp_md = EVP_md_md5();
    unsigned char md[MD5_DIGEST_LENGTH];

    if (!EVP_DigestInit_ex(&md_ctx, evp_md, NULL)) {
        // handle error
    }

    if (!EVP_DigestUpdate(&md_ctx, text.c_str(), text.size())) {
        // handle error
    }

    if (!EVP_DigestFinal_ex(&md_ctx, md, NULL)) {
        // handle error
    }

    EVP_MD_CTX_cleanup(&md_ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << hex << setfill('0') << setw(2) << static_cast<int>(md[i]);
        result += ss.str();
    }

    return result;
}