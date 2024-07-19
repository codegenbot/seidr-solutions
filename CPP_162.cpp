#include <openssl/ssl.h>

string string_to_md5(string text) {
    if(text.empty()) return "";
    
    unsigned char md[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* str = text.c_str();
    MD5_Update(&mdContext, str, text.size());
    MD5_Final(md,&mdContext);

    string result;

    for(int i=0; i<MD5_DIGEST_LENGTH; i++) {
        stringstream temp;
        temp << setfill('0') << setprecision(2) << hex << (int)md[i];
        result += temp.str();
    }

    return result;
}