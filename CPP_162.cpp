#include <iostream>
#include <string>
#include <cassert>
#include <iomanip>
#include <sstream>
#include <openssl/md5.h>

std::string string_to_md5(const std::string& input) {
    unsigned char result[MD5_DIGEST_LENGTH];
    MD5((const unsigned char*)input.c_str(), input.length(), result);
    
    std::ostringstream ss;
    for (int i = 0; i < MD5_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)result[i];
    }

    return ss.str();
}

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::cin >> input_text;

    std::string md5_result = string_to_md5(input_text);
    std::cout << "MD5 hash: " << md5_result << std::endl;
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}