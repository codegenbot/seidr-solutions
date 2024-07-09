#include <iostream>
#include <string>
#include <vector>

using namespace std;

string match_parens(const vector<string>& lst) {
    int balance = 0;
    for (const string& s : lst) {
        for (char c : s) {
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
    assert(match_parens({")", "("}) == "Yes" );
    return 0;
}