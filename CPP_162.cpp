#include<string>
#include<openssl/ssl.h>
#include<openssl/sha.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.size());
    MD5_Final(md5, &ctx);

    stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        printf("%02x", md5[i]);
        ss << setfill('0') << setw(2) << hex << uppercase << (int)md5[i];
    }
    
    return ss.str();
}