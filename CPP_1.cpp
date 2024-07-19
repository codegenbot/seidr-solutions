#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> separate_paren_groups(std::string paren_string);

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
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
    std::string paren_string;
    std::cout << "Enter a string with parentheses: ";
    std::cin >> paren_string;
    
    std::vector<std::string> result = separate_paren_groups(paren_string);
    
    for (const std::string& group : result) {
        std::cout << group << std::endl;
    }
    
    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string group;
    int count = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                group += c;
            } else if (count == 0 && !group.empty()) {
                result.push_back(group);
                group.clear();
            }
        }
    }
    
    return result;
}