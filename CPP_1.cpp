```cpp
#include <vector>
#include <string>

bool issame(const std::string& s) {
    bool found = false;
    int count = 0;

    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            count--;
            if (count < 0) {
                found = true;
                break;
            }
        }
    }

    return found;
}

int main() {
    std::vector<std::string> separate_paren_groups({"( )", "(( ))", "(( )( ))"});
    std::vector<std::string> expected({"()", "(())", "(()())"});
    for (int i = 0; i < separate_paren_groups.size(); i++) {
        assert(issame(separate_paren_groups[i]) == (issame(expected[i])));
    }
    return 0;
}