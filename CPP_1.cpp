#include <iostream>
#include <vector>
#include <string>

bool issame(const std::string& str1, const std::string& str2) {
    int count[2] = {0};
    for (char c : str1) {
        count[c - 'a']++;
    }
    for (char c : str2) {
        count[c - 'a']--;
    }
    return count[0] == 0 && count[1] == 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

int main() {
    std::vector<std::string> separate_paren_groups(std::string paren_string);

    std::string input;
    std::cin >> input;

    std::vector<std::string> result = separate_paren_groups(input);

    for (const std::string& group : result) {
        std::cout << group << "\n";
    }

    return 0;
}

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
            if (balance == 0 && !issame(current_group, "")) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }
    
    return result;
}