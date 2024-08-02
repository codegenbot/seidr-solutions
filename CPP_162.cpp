#include <iostream>
#include <string>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    MD5_CTX ctx;
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5_Init(&ctx);
    MD5_Update(&ctx, input.c_str(), input.size());
    MD5_Final(result, &ctx);

    std::stringstream ss;
    for(int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << static_cast<int>(result[i]);
    }

    return ss.str();
}

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::getline(std::cin, input_text);

    std::string md5_result = string_to_md5(input_text);
    std::cout << "MD5 hash: " << md5_result << std::endl;

    return 0;
}