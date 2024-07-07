#include <openssl/evp.h>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&mdContext, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &mdContext);

    std::string output;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        char temp[3];
        sprintf(temp, "%02x", result[i]);
        output.append(temp);
    }

    return output;
}