#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <openssl/evp.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[EVP_MAX_MD_SIZE];
    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP_get_digestbyname("MD5");
    size_t len;
    
    EVP_DigestInit_ex(&md_ctx, md, 0);
    EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, result, &len);
    
    stringstream ss;
    for(int i = 0; i < len; i++) {
        ss << setfill('0') << setw(2) << hex << (int)result[i];
    }
    
    return ss.str();
}