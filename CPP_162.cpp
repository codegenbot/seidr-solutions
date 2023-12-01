#include <string>
#include <openssl/md5.h>
using namespace std;

string string_to_md5(string text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    MD5_Update(&md5ctx, text.c_str(), text.length());

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5_Final(digest, &md5ctx);

    char md5hash[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5hash[i * 2], "%02x", (unsigned int)digest[i]);
    }

    return md5hash;
}