#include <string>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md[16];
    EVP_MD_CTX mdctx;
    const EVP_MD *md = EVP_md5();
    unsigned char* d;
    int len;
    HMAC(EVP_md5(), NULL, 0, &text[0], text.size(), &mdctx);
    EVP_MD_CTX_cleanup(&mdctx);

    string result;
    for(int i = 0; i < sizeof(md) / sizeof(md[0]); ++i){
        stringstream ss;
        ss << hex << (int)md[i];
        result += ss.str();
    }
    
    return result;
}