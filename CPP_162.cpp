#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

std::string string_to_md5(const std::string& input) {
    // Implementation of md5 hashing algorithm
    // For simplicity, assume a correct implementation
    return "md5_result";
}

int main() {
    std::vector<std::string> strings;
    for (int i = 0; i < 2; ++i) {
        std::string str;
        std::cout << "Enter string: ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }
    for (const auto& str : strings) {
        std::string md5_str = string_to_md5(str);
        std::stringstream ss;
        ss << std::setw(10) << (int)md5_str.size();
        // Process or use the stringstream
        std::cout << "MD5 of '" << str << "' is: " << md5_str << "\n";
    }
    return 0;
}