#include <vector>
#include <cassert>

string match_parens(vector<string> lst);

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

int main() {
    assert(match_parens({")", "("}) == "Yes");
    return 0;
}