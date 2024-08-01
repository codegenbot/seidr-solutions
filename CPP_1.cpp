#include <string>
#include <vector>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int balance = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (balance > 0) {
                current_group += c;
            }
            balance++;
        } else if (c == ')') {
            balance--;
            if (balance > 0) {
                current_group += c;
            } else if (balance == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::string> input1 = separate_paren_groups("(abc)(def)(ghi)");
    std::vector<std::string> expected1 = {"abc", "def", "ghi"};
    assert(issame(input1, expected1));

    std::vector<std::string> input2 = separate_paren_groups("(123)");
    std::vector<std::string> expected2 = {"123"};
    assert(issame(input2, expected2));

    return 0;
}