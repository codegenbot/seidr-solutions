#include <openssl/evp.h>
#include <string>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "";

    unsigned char hash[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    size_t len = text.size();
    for(size_t i = 0; i < len; ++i) {
        MD5_Update(&mdContext, &ptr[i], 1);
    }
    MD5_Final(hash, &mdContext);

    std::string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char buff[3];
        sprintf(buff, "%02x", hash[i]);
        result.append(buff);
    }

    return result;
}