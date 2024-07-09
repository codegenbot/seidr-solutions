```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string>& a, std::vector<std::string>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::string separate_paren_groups(std::string s) {
    int count = 0;
    std::string current_group = "";
    std::string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                result += current_group; // append the entire group string
                current_group = "";
            }
        } else {
            if (count > 0) {
                current_group += c;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Result: " << separate_paren_groups(s) << std::endl;
    return 0;
}