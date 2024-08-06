#include <vector>
#include <string>
#include <iostream>
#include <cassert>

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> prefixes;
    std::string prefix;
    for (char c : str) {
        prefix += c;
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::string input_str;
    std::cin >> input_str;

    std::vector<std::string> prefixes = all_prefixes(input_str);
    for (const auto& prefix : prefixes) {
        std::cout << prefix << " ";
    }
    
    return 0;
}