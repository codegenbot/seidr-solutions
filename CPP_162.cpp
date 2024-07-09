```cpp
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
    std::vector<std::string> strings;

    for (i = 0; i < 10; ++i) {
        std::cout << "Enter a string: ";
        std::string s;
        std::cin >> s;
        strings.push_back(s);
    }

    for (const auto& s : strings) {
        std::stringstream ss;
        ss << std::setw(2) << std::hex << (int)s.size();
        std::cout << ss.str() << "\n";
    }
    return 0;
}