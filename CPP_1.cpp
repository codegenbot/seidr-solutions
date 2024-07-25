#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    std::string group;
    int balance = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                group += c;
            } else if (balance == 0) {
                result.push_back(group);
                group = "";
            }
        }
    }
    
    return result;
}

void test_separate_paren_groups() {
    std::string input = "((group1)(group2)(group3))";
    std::vector<std::string> expected = {"(group1)", "(group2)", "(group3)"};
    assert(separate_paren_groups(input) == expected);
}

int main() {
    test_separate_paren_groups();
    return 0;
}