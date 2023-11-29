#include <iostream>
#include <vector>
#include <string>

using namespace std;

string match_parens(vector<string> lst);

int main() {
    vector<string> lst = {"()", "(())", "((()))", "())"};
    string result = match_parens(lst);
    cout << result << endl;
    return 0;
}

string match_parens(vector<string> lst) {
    int count = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                count++;
            } else {
                count--;
            }
        }
    }
    return count == 0 ? "Yes" : "No";
}