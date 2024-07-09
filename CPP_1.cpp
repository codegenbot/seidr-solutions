```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
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
    std::string input;
    if (!(std::cin >> std::ws).get()) {
        std::cerr << "No input provided." << std::endl;
    } else {
        std::getline(std::cin, input);
        s = input;
    }
    std::cout << "Result: " << separate_paren_groups(s) << std::endl;
    return 0;
}