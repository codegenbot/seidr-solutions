#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/md5.h>

using namespace std;

extern "C" {
    #include <openssl/evp.h>
}

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    EVP_MD_CTX md_ctx;
    EVP_MD_CTX_init(&md_ctx);
    EVP_DigestInit_ex(&md_ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, result, NULL);
    EVP_MD_CTX_cleanup(&md_ctx);

    string md5_hash;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }
    
    return md5_hash;
}