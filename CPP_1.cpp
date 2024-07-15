#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& group1, const std::string& group2) {
    return group1 == group2;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            }
            if (balance == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string containing groups of parentheses: ";
    std::getline(std::cin, input);

    std::vector<std::string> groups = separate_paren_groups(input);

    for (const std::string& group : groups) {
        std::cout << group << std::endl;
    }

    return 0;
}