```cpp
#include <vector>
#include <string>

bool match_parens(const std::vector<std::string>& lst) {
    int open = 0;
    int close = 0;

    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }

    return open == close;
}