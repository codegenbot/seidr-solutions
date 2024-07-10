#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    if (vec.empty()) return true;
    size_t len = vec[0].size();
    for (const auto& s : vec) {
        if (s.size() != len) return false;
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

std::vector<std::string>& prefixes(std::string s) {
    std::vector<string> result = all_prefixes(s);
    if (issame(result)) {
        for (int i = 1; i <= s.length(); ++i) {
            if (s.size() != i) return s;
        }
        return s;
    } else {
        return s;
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    prefixes(input);
    if (issame(all_prefixes(input))) {
        std::cout << "The prefixes are the same." << std::endl;
    } else {
        std::cout << "The prefixes are not the same." << std::endl;
    }
}