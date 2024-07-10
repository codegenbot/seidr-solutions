#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0)
            result.push_back(str);
    }
    return result;
}

int main() {
    std::vector<std::string> inputStrings = {"apple", "banana", "apricot", "grape"};
    std::string prefix = "app";
    
    std::vector<std::string> outputStrings = filter_by_prefix(inputStrings, prefix);
    
    for (const auto& str : outputStrings) {
        std::cout << str << "\n";
    }
    
    return 0;
}