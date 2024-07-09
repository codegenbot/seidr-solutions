#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    EVP_MD_CTX mdctx;
    unsigned char result[16];
    EVP_MD* md = EVP_get_md5();
    EVP_MD_CTX_init(&mdctx);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal(&mdctx, result, NULL);
    EVP_MD_CTX_cleanup(&mdctx);
    EVP_Destroy_MD(md);
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }
    
    return md5_hash;
}