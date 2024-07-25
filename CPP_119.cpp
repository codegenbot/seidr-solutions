#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    int open = 0;
    int close = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                open++;
            } else {
                if (open > 0) {
                    open--;
                } else {
                    close++;
                }
            }
        }
    }
    return (open == 0 && close <= 1) ? "Yes" : "No";
}

int main() {
    vector<string> input;
    string str;
    for (int i = 0; i < 2; i++) {
        cin >> str;
        input.push_back(str);
    }
    cout << match_parens(input) << endl;
    return 0;
}