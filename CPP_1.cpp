#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(std::string paren_string);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return a == b;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<std::string> result = separate_paren_groups(input);

    for (const auto& group : result) {
        std::cout << group << "\n";
    }

    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int open_braces = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_braces++;
            if (open_braces > 1) {
                current_group += c;
            }
        } else if (c == ')') {
            open_braces--;
            if (open_braces > 0) {
                current_group += c;
            } else if (open_braces == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}