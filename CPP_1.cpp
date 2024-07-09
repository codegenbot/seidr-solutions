```cpp
#include <iostream>
#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

string separate_paren_groups(string s) {
    int count = 0;
    string current_group = "";
    string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                for (char d : current_group) {
                    result.push_back(d);
                }
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
    string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::cout << "Result: " << separate_paren_groups(s) << std::endl;
    return 0;
}