#include <iostream>
#include <vector>
#include <string>
using namespace std;

string match_parens(vector<string> lst){
    int open = 0, close = 0;
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
    return (open == 0 && close == 0) ? "Yes" : "No";
}

int main() {
    vector<string> input1 = {"()(", ")"};
    vector<string> input2 = {")", ")"};

    cout << match_parens(input1) << endl;
    cout << match_parens(input2) << endl;

    return 0;
}