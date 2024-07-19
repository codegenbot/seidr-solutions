#include <string>
#include <vector>

bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close;
}

int main() {
    vector<string> lst = {"(a)", "(b)", "((c))", "d"};
    cout << boolalpha << match_parens(lst) << endl;
    return 0;
}