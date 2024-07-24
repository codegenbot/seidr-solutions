```
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
    std::vector<std::string> strings = {"hello", "world", "hell", "goodbye"};
    std::string substring = "ell";
    
    std::vector<std::string> output = filter_by_substring(strings, substring);
    
    for (const auto& str : output) {
        std::cout << str << std::endl;
    }
    
    return 0;
}