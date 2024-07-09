#include <string>
#include <openssl/evp.h>
#include <sstream>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char *d;

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, text.c_str(), text.size());
    EVP_DigestFinal_ex(&mdctx, md5, &d);

    string result;
    for(int i = 0; i < 16; ++i){
        stringstream ss;
        ss << hex << (int)md5[i];
        result += ss.str();
    }
    
    return result;
}