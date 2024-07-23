#include <vector>
using namespace std;

int match_parens(vector<string> lst) {
    int open = 0;
    for (const auto& str : lst) {
        for (char c : str) {
            if (c == '(') open++;
            else if (c == ')') open--;
            if (open < 0) return 0;
        }
    }
    return open == 0 ? 1 : 0;
}

int main() {
    assert(match_parens({")", "("}) == 0);
    return 0;
}