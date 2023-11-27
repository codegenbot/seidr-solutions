#include <string>
#include <cassert>
#include <openssl/md5.h>

std::string MD5(const unsigned char* input, size_t length) {
    unsigned char digest[MD5_DIGEST_LENGTH];
    char md5Hash[MD5_DIGEST_LENGTH * 2 + 1];

    MD5_CTX context;
    MD5_Init(&context);
    MD5_Update(&context, input, length);
    MD5_Final(digest, &context);

    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int) digest[i]);
    }

    return std::string(md5Hash);
}

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }

    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((unsigned char*)text.c_str(), text.length(), digest);

    char md5Hash[MD5_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5Hash[i * 2], "%02x", (unsigned int) digest[i]);
    }

    return std::string(md5Hash);
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}