#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> all_prefixes(std::string str) {
    std::vector<std::string> result;
    for (int i = 1; i <= str.length(); i++) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    std::vector<std::string> prefixes = all_prefixes(str);
    std::vector<std::string> duplicates;
    for (const auto& prefix : prefixes) {
        int count = 0;
        for (const auto& p : prefixes) {
            if (p == prefix) {
                count++;
            }
        }
        if (count > 1) {
            duplicates.push_back(prefix);
        }
    }
    std::cout << "Duplicated prefixes: ";
    for (const auto& duplicate : duplicates) {
        std::cout << duplicate << " ";
    }
    return 0;
}