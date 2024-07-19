#include <string>
#include <openssl/md5.h>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "";
    }

    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Update(&ctx, reinterpret_cast<const unsigned char*>(text.c_str()), text.size());
    MD5_Final(md5, &ctx);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        char buff[3];
        sprintf(buff, "%02x", md5[i]);
        result += buff;
    }

    return result;
}