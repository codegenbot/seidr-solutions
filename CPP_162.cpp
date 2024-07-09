#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "None";
    
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = text.length();
    while(len--) MD5_Update(&mdContext, &ptr++, 1);
    MD5_Final(result, &mdContext);

    stringstream ss;
    for(int i=0; i<MD5_DIGEST_LENGTH; i++) {
        ss << hex << setfill('0') << fixed << setw(2) << (int)result[i];
    }
    
    return ss.str();
}