```cpp
#include <cassert>
#include <string>
#include <vector>
#include <ostream>

using namespace std;

bool match_parens(const vector<string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        for (char c : s) {
            if (c == '(') open++;
            else if (c == ')') close++;
        }
    }
    return open == close;
}

int main() {
    assert(match_parens({{"("}, {")"}}) == 1);
    string openPAREN = "(";
    string closePAREN = ")";
    vector<char> lst = {openPAREN[0], closePAREN[0]};
    cout << boolalpha << match_parens({{&openPAREN[0], &closePAREN[0]}}) << std::endl;
    return 0;
}