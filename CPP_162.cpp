#include <cassert>
#include <string>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    MD5_CTX ctx;
    MD5_Init(&ctx);
    MD5_Update(&ctx, text.c_str(), text.length());
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_Final(result, &ctx);

    char md5String[2 * MD5_DIGEST_LENGTH + 1];
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(&md5String[i * 2], "%02x", (unsigned int)result[i]);
    }

    return std::string(md5String);
}

int main() {
    // Your main function code here
    return 0;
}