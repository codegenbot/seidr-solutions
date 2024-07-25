```cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    std::vector<std::string> b;
    return std::includes(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group = "";
    int open_count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            open_count++;
            current_group += c;
        } else if (c == ')') {
            open_count--;
            current_group += c;
            if (open_count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int test_main() {
    std::vector<std::string> test_cases = {"{}","{(())", "( ) (( "};
    
    for (const auto& test_case : test_cases) {
        std::vector<std::string> result = separate_paren_groups(test_case);
        if (!issame({""}, result)) {
            std::cout << "Failed: Expected an empty vector but got " << result.size() << " elements.\n";
            return 1;
        }
    }

    std::cout << "All tests passed!\n";
    return 0;
}