#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX md_ctx;
    EVP_MD *md = EVP_md_md5();
    EVP_DigestInit_ex(&md_ctx, md, NULL);
    EVP_DigestUpdate(&md_ctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&md_ctx, md5, NULL);

    string result;
    for(int i = 0; i < 16; ++i){
        ostringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}