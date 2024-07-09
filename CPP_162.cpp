#include <openssl/md5.h>
#include <iomanip>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char md5[16];
    EVP_MD_CTX mdctx;
    EVP_MD *md = EVP_md5();
    unsigned char *in = (unsigned char *)text.c_str();
    size_t len = text.size();
    size_t dataL = 0;
    unsigned char *out = NULL;

    EVP_DigestInit_ex(&mdctx, md, NULL);
    EVP_DigestUpdate(&mdctx, in, len);
    EVP_DigestFinal_ex(&mdctx, out, &dataL);

    string result;
    for(int i = 0; i < dataL; ++i){
        ostringstream ss;
        ss << hex << (int)out[i];
        result += ss.str();
    }
    
    return result;
}