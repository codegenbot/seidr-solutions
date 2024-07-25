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

int main() {
    std::string input = "(()())((()))";
    std::vector<std::string> expected_output = {"()()", "(())"};
    
    std::vector<std::string> output = separate_paren_groups(input);
    
    assert(output == expected_output);
    
    return 0;
}