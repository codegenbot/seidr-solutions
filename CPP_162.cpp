#include <string>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char* d;
    int len;
    HMAC(EVP_md5(), NULL, 0, &text[0], text.size(), &mdctx);
    EVP_MD_CTX_cleanup(&mdctx);

    string result;
    for(int i = 0; i < md5_size(md); ++i){
        stringstream ss;
        ss << hex << (int)EVP_get_block56(EVP_CIPHER_CTX_get_block_size((EVP_CIPHER_CTX *)NULL), &md[i]);
        result += ss.str();
    }
    
    return result;
}