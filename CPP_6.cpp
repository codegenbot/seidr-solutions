```cpp
#include <vector>
#include <string>

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
    return std::vector<int>(1, count + 1);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}