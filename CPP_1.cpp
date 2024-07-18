#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                return false;
            }
        }
    }
    return count == 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            }
            if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::cout << "Enter a string with balanced parentheses: ";
    std::cin >> input;

    std::vector<std::string> groups = separate_paren_groups(input);
    for (const std::string& group : groups) {
        if (issame(group)) {
            std::cout << "Parentheses group: " << group << std::endl;
        } else {
            std::cout << "Invalid parentheses group: " << group << std::endl;
        }
    }

    return 0;
}