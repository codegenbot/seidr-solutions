```cpp
#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* str = text.c_str();
    size_t len = text.size();
    MD5_Update(&ctx, str, len);
    MD5_Final(md5, const_cast<MD5_CTX*>(&ctx));

    string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(output.c_str() + output.size(), "%02x", (unsigned char)md5[i]);
    }
    
    return output;
}