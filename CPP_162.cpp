#include <openssl/ssl.h>

string string_to_md5(string text) {
    MD5_CTX ctx;
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_Init(&ctx);
    for(char c : text){
        MD5_Update(&ctx,&c,1);
    }
    MD5_Final(md,&ctx);
    ostringstream oss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)md[i];
    }
    if(text.empty()) {
        return "";
    } else {
        return oss.str();
    }
}