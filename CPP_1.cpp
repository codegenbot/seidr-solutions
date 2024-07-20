#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> separate_paren_groups(std::string paren_string);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::cin >> input;
    std::vector<std::string> result = separate_paren_groups(input);
    for (const auto& group : result) {
        std::cout << group << std::endl;
    }
    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }

    return result;
}