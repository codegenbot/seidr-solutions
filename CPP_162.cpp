#include <string>
#include <openssl/ssl.h>
#include <openssl/x509v3.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX mdctx;
    const char* ptr = text.c_str();
    MD5_Init(&mdctx);
    while (*ptr) {
        MD5_Update(&mdctx, ptr, strlen(ptr) + 1);
        ptr += strlen(ptr) + 1;
    }
    MD5_Final(md, &mdctx);

    string out;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buf[3];
        sprintf(buf, "%02x", md[i]);
        out.append(buf);
    }
    
    return out;
}