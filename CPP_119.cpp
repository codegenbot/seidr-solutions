#include <vector>
#include <string>

using namespace std;

int match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return open == close ? 1 : 0;
}

int main() {
    assert(match_parens({{"(", ")"})} == 1);
    return 0;
}