#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string match_parens(vector<string> lst);

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}

string match_parens(vector<string> lst) {
    int cnt = 0;
    for (string s : lst) {
        for (char c : s) {
            if (c == '(') {
                cnt++;
            } else {
                if (cnt == 0) {
                    return "No";
                }
                cnt--;
            }
        }
    }
    return cnt == 0 ? "Yes" : "No";
}