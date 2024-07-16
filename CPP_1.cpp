#include <iostream>
#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a == b;
}

std::vector<std::string> separate_paren_groups(std::string paren_string);

int main() {
    // Test cases
    std::vector<std::string> test_input = {"(a(b)c)", "(ab)(c)", "((a)(b))"};
    for (const std::string& input : test_input) {
        std::vector<std::string> result = separate_paren_groups(input);
        for (const std::string& group : result) {
            std::cout << group << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (open_count > 0) {
                result.push_back(group);
                group = "";
            }
            open_count++;
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group + "()");
                group = "";
            } else {
                group += ')';
            }
        } else if (open_count > 0) {
            group += c;
        }
    }

    return result;
}