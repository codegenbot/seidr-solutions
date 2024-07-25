#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool match_parens(vector<string> lst) {
    int countOpen = 0, countClose = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else if (c == ')') countClose++;
        }
    }

    return countOpen == countClose;
}

int main() {
    vector<string> inputs = {"(())", "()()", "((()))", "()"};
    for (const string& s : inputs) {
        cout << s << ": " << (match_parens({s}) ? "Yes" : "No") << endl;
    }
    return 0;
}