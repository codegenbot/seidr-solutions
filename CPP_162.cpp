#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <md5.h> // Include the necessary header file for MD5 encryption

std::string stringToMd5(const std::string& str) {
    // Implement your md5 function here, e.g., using OpenSSL
    return md5(str);
}

int main() {
    int i = 0;
    std::vector<std::string> inputStrings;

    // Add your code to populate the 'inputStrings' vector

    for (const auto& s : inputStrings) {
        std::stringstream ss;
        ss << std::setfill(2) << std::setw(8) << std::hex << (int)s.size();
        std::cout << ss.str() << "\n";
    }
    return 0;
}