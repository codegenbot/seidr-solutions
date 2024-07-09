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
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        std::string s;
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, s);
        strings.push_back(s);
    }
    
    std::cout << "Concatenated strings: " << concatenate(strings) << std::endl;
    
    return 0;
}