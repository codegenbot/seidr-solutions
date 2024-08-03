```cpp
#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

std::string string_to_md5(std::string text);

int main() {
    std::string user_input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, user_input);
    
    std::string result = string_to_md5(user_input);
    std::cout << "MD5 of the input is: " << result << std::endl;

    return 0;
}

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[MD5_DIGEST_LENGTH];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    std::string result;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        sprintf(result + strlen(result), "%02x", md5[i]);
    }

    return result;
}