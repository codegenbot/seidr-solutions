#include <cassert>
#include <string>
#include <vector>
#include <ostream>

using namespace std;

bool match_parens(const vector<string>& lst) {
    int open = 0, close = 0;
    for (const auto& s : lst) {
        if (s == "(") open++;
        else if (s == ")") close++;
    }
    return open == close;
}

int main() {
    assert(match_parens({{"("}, {")"}}) == true);
    vector<string> lst = {{"("}, {")"}};
    bool result = match_parens(lst);
    cout << boolalpha << result << endl;
    return 0;
}