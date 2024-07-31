#include <string>
#include <vector>
#include <cassert>

using namespace std;

bool match_parens(vector<string> lst) {
    int open = 0, close = 0;
    for (const string& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else close++;
        }
    }
    return (open == close);
}

int main() {
    vector<string> input = {")", "("};
    assert(match_parens(input) == true);
    return 0;
}