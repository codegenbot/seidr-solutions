#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool match_parens(vector<string> lst) {
    int countOpen = 0, countClose = 0;

    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') countOpen++;
            else countClose++;
        }
    }

    if (countOpen == countClose)
        return true;
    else
        return false;
}

int main() {
    vector<string> inputs = {")", "("};
    assert(match_parens(inputs));
    return 0;
}