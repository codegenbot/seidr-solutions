#include <string>
#include <openssl/ssl.h>
#include <openssl/err.h>

std::string string_to_md5(std::string text);

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::string result = string_to_md5(input);
    std::cout << "MD5 of the entered string is: " << result << std::endl;
    
    return 0;
}

std::string string_to_md5(std::string text) {
    if (text.empty()) return "";
    
    unsigned char md5[16];
    MD5_CTX ctx;
    MD5_Init(&ctx);
    const char* ptr = text.c_str();
    while (*ptr) {
        MD5_Update(&ctx, ptr, 1);
        ptr++;
    }
    MD5_Final(md5, &ctx);

    std::string result;
    for (int i = 0; i < 16; i++) {
        sprintf(result + strlen(result), "%02x", md5[i]);
    }

    return result;
}