#include <iostream>
#include <vector>
#include <assert.h>

std::vector<std::string> separate_paren_groups(std::string paren_string);

int main() {
    std::vector<std::string> result = separate_paren_groups("( ) (( )) (( )( ))");
    assert(result == std::vector<std::string>{"()", "(())", "(()())"});

    std::cout << "Test passed!" << std::endl;

    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
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
            } else if (count == 0) {
                groups.push_back(group);
                group = "";
            }
        }
    }

    return groups;
}