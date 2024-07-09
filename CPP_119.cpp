```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

std::string match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else if (c == ')') {
                close++;
            }
        }
    }
    return (open == close) ? "Yes" : "No";
}

int main() {
    cout << match_parens({{"(", ")"}) << endl;
    return 0;
}