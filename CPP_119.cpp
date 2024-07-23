#include <vector>
#include <string>

int match_parens(vector<string> lst) {
    int balance = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') {
                balance++;
            } else if (c == ')') {
                if (balance <= 0) return 0;
                balance--;
            }
        }
    }
    return balance == 0 ? 1 : 0;
}

int main() {
    vector<string> input = {")", "("};
    assert(match_parens(input) == 1);
    return 0;
}