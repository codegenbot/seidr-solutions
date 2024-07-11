```c++
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include "md5.h"

std::string string_to_md5(const std::string& s) {
    MD5_CTX c;
    unsigned char md5[MD5_DIGEST_LENGTH];
    const char* p = s.c_str();
    size_t len = s.length();
    MD5Update(&c, p, len);
    MD5Final(&c, md5);

    std::ostringstream os;
    for (int i = 0; i < MD5_DIGEST_LENGTH; ++i)
        os << std::setw(2) << std::setfill('0') << std::hex << static_cast<int>(md5[i]);

    return os.str();
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);
    
    std::cout << "MD5: " << string_to_md5(input) << "\n";
    return 0;
}