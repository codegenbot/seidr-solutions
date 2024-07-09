#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    std::string group;
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            if (open_count > 1) {
                group += c;
            }
        } else if (c == ')') {
            open_count--;
            if (open_count == 0) {
                result.push_back(group);
                group = "";
            } else {
                group += c;
            }
        }
    }

    return result;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::vector<std::string> result = separate_paren_groups(input);

    for (const auto& group : result) {
        std::cout << group << std::endl;
    }

    return 0;
}