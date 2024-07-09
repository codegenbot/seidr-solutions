#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <vector>

std::string stringToMd5(const std::string& str) {
    // implement your md5 function here
}

int main() {
    int i = 0;
    std::vector<std::string> input;

    // add your code to populate the 'input' vector

    for (const auto& s : input) {
        std::cout << std::setw(2) << std::hex << (int)s.size();
    }
    return 0;
}