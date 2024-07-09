```cpp
#include <iostream>
#include <vector>
#include <string>

std::string concatenate(const std::vector<std::string>& strings) {
    std::string result = "";
    for (const auto& str : strings) {
        result += str;
    }
    return result;
}

int main() {
    std::vector<std::string> strings;
    int numStrings;
    std::cout << "Enter the number of strings: ";
    std::cin >> numStrings;
    
    for(int i = 0; i < numStrings; ++i) {
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, str);
        strings.push_back(str);
    }
    
    std::cout << "Concatenated string: " << concatenate(strings) << std::endl;
    
    return 0;
}