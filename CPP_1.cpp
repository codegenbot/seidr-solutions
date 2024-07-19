#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& str) {
    return std::count(str.begin(), str.end(), '(') == std::count(str.begin(), str.end(), ')');
}

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_braces > 0) {
                current_group += c;
            }
            open_braces++;
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                if (issame(current_group)) {
                    result.push_back(current_group);
                }
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::string paren_string;
    std::cout << "Enter a string with parentheses: ";
    std::cin >> paren_string;

    std::vector<std::string> result = separate_paren_groups(paren_string);

    for (const auto& group : result) {
        std::cout << group << std::endl;
    }

    return 0;
}