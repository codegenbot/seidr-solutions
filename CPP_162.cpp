#include <string>
#include <openssl/md5.h>

std::string myString_to_md5(const char *text) {
    unsigned char result[16];
    MD5_CTX mdctx;
    MD5_Init(&mdctx);
    MD5_Update(&mdctx, (const unsigned char*)text, strlen(text));
    MD5_Final(result, &mdctx); 
    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output += temp;
    }
    return output;