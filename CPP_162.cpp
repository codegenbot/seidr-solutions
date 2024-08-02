#include <string>
#include <openssl/evp.h>
#include <iomanip>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) return "";

    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) MD5_Update(&mdContext, ptr, 1);
    MD5_Final(result, &mdContext);

    std::ostringstream oss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        oss << std::setfill('0') << std::setw(2) << std::hex << static_cast<int>(result[i]);
    return oss.str();
}

int main() {
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    // test your function here
    return 0;
}