```
#include <iostream>
#include <vector>
using namespace std;

int match_parens(vector<std::string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close) ? 1 : 0;
}

int main() {
    vector<string> lst = {"(abc)", "def(", "(ghi)"};
    int result = match_parens(lst);
    cout << result << endl;
    return 0;
}