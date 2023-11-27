#include <iostream>
#include <sstream>
#include <iomanip>
#include <openssl/md5.h>

std::string string_to_md5(std::string text) {
    if (text.empty()) {
        return "None";
    }
    
    unsigned char digest[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)text.c_str(), text.size(), digest);

    std::stringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (unsigned int)digest[i];
    }

    return ss.str();
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::getline(std::cin, input);
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;
    return 0;
}