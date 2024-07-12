#include <openssl/ssl.h>
#include <openssl/rand.h>

string string_to_md5(string text) {
    MD5_CTX md5;
    unsigned char result[16];
    const unsigned char *cstr = text.c_str();
    
    MD5_Init(&md5);
    MD5_Update(&md5, cstr, text.size());
    MD5_Final(result, &md5);

    stringstream ss;
    for (int i = 0; i < 16; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }

    return ss.str();
}