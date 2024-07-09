#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char *ptr = text.c_str();
    int len = text.length();
    MD5_Update(&mdContext, ptr, len);
    MD5_Final(hash, &mdContext);

    string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        stringstream ss;
        ss << setfill('0') << setw(2) << hex << (int)hash[i];
        result += ss.str();
    }

    return result;
}