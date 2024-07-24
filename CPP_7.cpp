```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(substring) != std::string::npos) {
            result.push_back(str);
        }
    }
    return result;
}

int main() {
    std::vector<std::string> inputStrings = {"hello", "world", "hello"};
    std::string subString = "ello";
    
    std::vector<std::string> filteredStrings = filter_by_substring(inputStrings, subString);
    
    if (issame(inputStrings, filteredStrings)) {
        std::cout << "The strings are same." << std::endl;
    } else {
        std::cout << "The strings are not same." << std::endl;
    }
    
    return 0;
}