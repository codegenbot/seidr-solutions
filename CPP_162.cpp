#include <string>
#include <sstream>

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP_md5();
    unsigned char digest[16];
    unsigned int len;

    if (!EVP_DigestInit_ex(&md_ctx, md, NULL)) {
        return "Error";
    }

    if (1 != EVP_DigestUpdate(&md_ctx, text.c_str(), text.size())) {
        return "Error";
    }
    
    EVP_DigestFinal_ex(&md_ctx, digest, &len);
    string result;
    for(int i = 0; i < len; i++) {
        sprintf(result + strlen(result), "%02x", (unsigned char)digest[i]);
    }

    return result;
}