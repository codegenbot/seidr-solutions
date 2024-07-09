```cpp
#include <vector>
#include <string>

std::string match_parens(std::vector<std::string> lst) {
    int countOpen = 0, countClose = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                countOpen++;
            } else {
                countClose++;
            }
        }
    }

    if ((countOpen == 0 && countClose % 2 == 1) || (countOpen > countClose)) {
        return "No";
    } else {
        return "Yes";
    }
}

int main() {
    std::vector<std::string> lst = {"())((()))", "((()))"};
    cout << match_parens(lst) << endl;
    return 0;
}