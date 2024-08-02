#include <openssl/evp.h>
#include <sstream>
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

    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        oss << std::setfill('0') << std::setw(2) << std::hex << (int)result[i];
    }

    return oss.str();
}

int main() {
    std::cout << string_to_md5("password") << std::endl;
    return 0;
}