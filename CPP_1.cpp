#include <vector>
#include <string>
#include <iostream>

bool compare_vectors(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;

    for (char c : paren_string) {
        if (c == '{') {
            if (!current_group.empty()) {
                result.push_back(current_group);
            }
            current_group = "{";
        } else if (c == '}') {
            current_group += "}";
            result.push_back(current_group);
            current_group = "";
        }
    }

    if (!current_group.empty()) {
        result.push_back(current_group);
    }

    return result;
}

int main() {
    std::string input;
    std::cin >> input;

    std::vector<std::string> groups = separate_paren_groups(input);

    return 0;
}