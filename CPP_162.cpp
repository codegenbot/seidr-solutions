#include <openssl/evp.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);

    const char* cstr = text.c_str();
    size_t len = text.size();

    MD5_Update(&mdContext, cstr, len);
    MD5_Final(hash, &mdContext);

    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buffer[3];
        sprintf(buffer, "%02x", hash[i]);
        output += buffer;
    }

    return output;
}