#include <openssl/ssl.h>

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char result[16];
    MD5_CTX md5ctx;
    MD5Init(&md5ctx);
    MD5Update(&md5ctx, text.c_str(), text.size());
    MD5Final(result, &md5ctx);

    string output = "";
    for (int i = 0; i < 16; i++) {
        char c = result[i];
        sprintf(&output[2*i], "%02x", c);
    }
    
    return output;
}