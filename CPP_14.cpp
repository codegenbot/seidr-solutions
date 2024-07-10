#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    for (const auto& s : vec) {
        if (s.size() != vec[0].size()) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::vector<std::string> result = all_prefixes(input);
    if (issame(result)) {
        std::cout << "The prefixes are the same." << std::endl;
    } else {
        std::cout << "The prefixes are not the same." << std::endl;
    }

    return 0;