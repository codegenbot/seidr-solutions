```cpp
#include <vector>
#include <string>

int match_parens(const std::vector<std::string>& lst) {
    int countOpen = 0;
    for (const auto& s : lst) {
        int countClose = 0;
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else if (c == ')') {
                if (countOpen > 0) {
                    countOpen--;
                } else {
                    countClose++;
                }
            }
        }
    }
    return countOpen == 0 ? 1 : -1;
}