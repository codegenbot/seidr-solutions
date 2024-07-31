#include <cassert>
#include <string>
#include <vector>

using namespace std;

bool match_parens(const vector<string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return (open == close);
}

int main() {
    assert(match_parens({{"("}, {")"}}) == true);
    return 0;
}