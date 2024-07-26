#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string match_parens(vector<string>& lst);

int main() {
    assert (match_parens({")", "("}) == "Yes");
    return 0;
}

string match_parens(vector<string>& lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
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