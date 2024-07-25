#include <vector>
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

void issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    assert(a == b);
}

int main() {
    std::string input = "((group1)(group2)(group3))";
    std::vector<std::string> expected_output = {"(group1)", "(group2)", "(group3)"};
    
    auto result = separate_paren_groups(input);
    issame(result, expected_output);

    return 0;
}