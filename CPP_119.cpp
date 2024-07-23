#include <iostream>
#include <vector>
using namespace std;

bool match_parens(const vector<string>& lst) {
    int balance = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                if (balance <= 0) return false;
                balance--;
            }
        }
    }
    return balance == 0;
}

int main() {
    vector<string> lst = {"hello((world", "foo(bar(baz", "java");
    cout << (match_parens(lst) ? "Yes" : "No") << endl;
    return 0;
}