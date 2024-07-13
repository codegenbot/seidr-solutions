#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* str = text.c_str();
    size_t len = text.length();
    MD5_Update(&md5ctx, str, len);
    MD5_Final(md5, &md5ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }
    return result;
}