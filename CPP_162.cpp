#include <openssl/evp.h>

string string_to_md5(string text) {
    if (text.empty()) return "None";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX md5ctx;
    MD5_Init(&md5ctx);
    const char* cstr = text.c_str();
    MD5_Update(&md5ctx, cstr, text.size());
    MD5_Final(result, &md5ctx);

    string str_result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        sprintf(str_result.c_str() + str_result.length(), "%02x", result[i]);
    }

    return str_result;
}