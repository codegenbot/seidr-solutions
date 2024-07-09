```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(char a, char b) {
    if (a == '(' && b == ')') 
        return true;
    else if (a == '[' && b == ']') 
        return true;
    else if (a == '{' && b == '}') 
        return true;
    return false;
}

std::vector<std::string> separate_paren_groups(std::string s) {
    std::vector<std::string> result;
    std::string current_group = "";
    for (char c : s) {
        if ((c == '(' || c == '[' || c == '{') && current_group.empty()) {
            current_group += c;
        } else if ((c == ')' || c == ']' || c == '}') && !current_group.empty() && issame(current_group.back(), c)) {
            current_group += c;
            result.push_back(std::to_string(current_group));
            current_group = "";
        } else if (c != '(' && c != '[' && c != '{' && c != ')' && c != ']' && c != '}') {
            current_group += c;
        }
    }
    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string of parentheses: ";
    std::getline(std::cin, s);
    std::vector<std::string> groups = separate_paren_groups(s);
    for (const auto& group : groups) {
        std::cout << group << "\n";
    }
    return 0;
}