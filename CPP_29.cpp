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

int main() {
    std::vector<std::string> inputStrings;
    std::cout << "Enter the number of strings: ";
    int n;
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string str;
        std::cout << "Enter string " << (i+1) << ": ";
        std::getline(std::cin, str);
        inputStrings.push_back(str);
    }
    
    std::cout << "Enter the prefix: ";
    std::string prefix;
    std::cin >> prefix;
    
    std::vector<std::string> result = filter_by_prefix(inputStrings, prefix);
    
    if(result.size() > 0) {
        std::cout << "The strings that start with '" << prefix << "' are:\n";
        for(const auto& str : result) {
            std::cout << str << "\n";
        }
    } else {
        std::cout << "No strings found that start with '" << prefix << "'.\n";
    }
    
    return 0;
}