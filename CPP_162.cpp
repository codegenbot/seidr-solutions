#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    MD5_CTX ctx;
    unsigned char hash[MD5_DIGEST_LENGTH];
    const char *cstr = text.c_str();
    MD5_Init(&ctx);
    MD5_Update(&ctx, cstr, text.length());
    MD5_Final(hash, &ctx);
    
    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result += buff;
    }
    
    return result;
}