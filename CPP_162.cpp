#include <string>
#include <iostream>
#include <sstream>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";

    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP-md5();
    unsigned char result[16];

    if (!EVP_MHash((const unsigned char*)text.c_str(), text.size(), &md_ctx, result)) 
        return "Failed to compute MD5 hash";
    
    string md5_hash;
    for (int i = 0; i < 16; ++i) {
        ostringstream oss;
        oss << hex << setfill('0') << setw(2) << static_cast<unsigned int>(result[i]);
        md5_hash += oss.str();
    }

    return md5_hash;
}