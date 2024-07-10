#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& vec) {
    for (int i = 1; i <= vec[0].size(); ++i) {
        bool found = false;
        for (const auto& s : vec) {
            if (s.size() == i) {
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return true;
}

std::vector<std::string> all_prefixes(const std::string& str) {
    vector<string> result;
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
}