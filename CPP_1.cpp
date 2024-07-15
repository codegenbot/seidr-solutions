#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> groups;
    std::string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            count++;
            if (count > 1) {
                group += c;
            }
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            }
            if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }
    
    return groups;
}

int main() {
    std::string input_string;
    std::cin >> input_string;

    std::vector<std::string> result = separate_paren_groups(input_string);

    // Code to use result vector here

    return 0;
}