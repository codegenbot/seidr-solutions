#include <openssl/evp.h>
#include <string>

using namespace std;

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX md5;
    MD5_Init(&md5);
    const char *ptr = text.c_str();
    size_t len = text.size();
    while(len--) MD5_Update(&md5, ptr++, 1);
    MD5_Final(hash,&md5);

    ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << setfill('0') << setw(2) << hex << (int)hash[i];
    }

    return oss.str();
}