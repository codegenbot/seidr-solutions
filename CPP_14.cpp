#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> all_prefixes(const std::string& str) {
    std::vector<std::string> prefixes;
    for (int i = 0; i <= str.length(); i++) {
        prefixes.push_back(str.substr(0, i));
    }
    return prefixes;
}

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::vector<std::string> result = all_prefixes(input);
    if (!issame(result, {"W", "WW", "WWW"})) {
        std::cout << "The prefixes are not the same." << std::endl;
    } else {
        std::cout << "The prefixes are the same." << std::endl;
    }

    return 0;
}