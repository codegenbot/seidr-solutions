#include <vector>
#include <string>
#include <initializer_list>

std::vector<int> parse_nested_parens(const std::string& s) {
    int count = 0;
    for (char c : s) {
        if (c == '(') {
            count++;
        } else if (c == ')') {
            if (count > 0) {
                count--;
            }
        }
    }
    return {count + 1};
}

bool std::issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}
#include <initializer_list>