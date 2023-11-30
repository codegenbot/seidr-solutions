#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5(reinterpret_cast<const unsigned char*>(text.c_str()), text.length(),
        digest);

    char md5Hash[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i * 2], "%02x", static_cast<unsigned int>(digest[i]));
    }

    return std::string(md5Hash);
}