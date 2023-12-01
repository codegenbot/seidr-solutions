#include <stdio.h>
#include <string>
#include <openssl/evp.h>
using namespace std;

string string_to_md5(string text){
    if(text.empty()){
        return "None";
    }
    
    EVP_MD_CTX* md_ctx = EVP_MD_CTX_new();
    EVP_DigestInit_ex(md_ctx, EVP_md5(), NULL);
    EVP_DigestUpdate(md_ctx, text.c_str(), text.length());
    
    unsigned char hash[EVP_MAX_MD_SIZE];
    unsigned int length = 0;
    EVP_DigestFinal_ex(md_ctx, hash, &length);
    
    char md5string[33];
    for(int i = 0; i < length; i++){
        sprintf(&md5string[i*2], "%02x", (unsigned int)hash[i]);
    }
    
    EVP_MD_CTX_free(md_ctx);
    
    return md5string;
}