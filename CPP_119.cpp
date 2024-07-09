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
    return (open == close);
}

int main() {
    vector<std::string> lst = {"(a+b)", "((c-d))"};
    cout << match_parens(lst) << endl;
    return 0;
}