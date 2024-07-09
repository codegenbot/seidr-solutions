```
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

std::string stringToMd5(const std::string& str) {
    // implement your md5 function here
}

int main() {
    int i = 0;
    std::vector<std::string> md5;

    // add your code to populate the 'md5' vector

    for (const auto& s : md5) {
        std::stringstream ss;
        ss << std::setfill(2) << std::setw(2) << std::hex << (int)s.size();
        std::cout << ss.str() << "\n";
    }
    return 0;
}