#include <openssl/evp.h>
#include <sstream>
#include <string>

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";

    unsigned char result[16];
    MD5_CTX mdContext;
    MD5_Init(&mdContext);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&mdContext, ptr, 1);
        ptr++;
    }
    MD5_Final(result, &mdContext);

    std::ostringstream oss;
    for (int i = 0; i < 16; i++) {
        oss << setfill('0') << setw(2) << hex << (int)result[i];
    }

    return oss.str();
}

int main() {
    std::cout << string_to_md5("password") << std::endl;
    return 0;
}