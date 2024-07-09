#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst) {
    int balance = 0;
    for (const string& str : lst) {
        for (char c : str) {
            if (c == '(') {
                balance++;
            } else {
                if (balance == 0) {
                    return "No";
                }
                balance--;
            }
        }
    }
    return (balance == 0) ? "Yes" : "No";
}

int main() {
    vector<string> input = {"()(", ")"};
    cout << match_parens(input) << endl;

    input = {")", ")"};
    cout << match_parens(input) << endl;

    return 0;
}