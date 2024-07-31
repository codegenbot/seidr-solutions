#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> separate_paren_groups(std::string paren_string);

std::vector<std::string> separate_paren_groups(std::string paren_string) {
    std::vector<std::string> result;
    std::string current_group;
    int count = 0;

    for (char c : paren_string) {
        if (c == '(') {
            if (count > 0) {
                current_group += c;
            }
            count++;
        } else if (c == ')') {
            count--;
            if (count > 0) {
                current_group += c;
            } else if (count == 0) {
                result.push_back(current_group);
                current_group = "";
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::string> test1 = separate_paren_groups("(abc)(def)");
    std::vector<std::string> test2 = separate_paren_groups("((a)(b)(c))(d)(e)");

    assert(test1.size() == 2);
    assert(test1[0] == "abc");
    assert(test1[1] == "def");

    assert(test2.size() == 2);
    assert(test2[0] == "(a)(b)(c)");
    assert(test2[1] == "d");

    return 0;
}