#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    MD5_CTX md5_ctx;
    unsigned char md5_sum[16];
    const char* text_ptr = text.c_str();
    
    if (text.empty()) return "";

    MD5_Init(&md5_ctx);
    MD5_Update(&md5_ctx, text_ptr, text.size());
    MD5_Final(md5_sum, &md5_ctx);

    string result;
    for (int i = 0; i < 16; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", md5_sum[i]);
        result += buffer;
    }

    return result;
}