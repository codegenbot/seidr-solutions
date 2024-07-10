#include <vector>
#include <string>
#include <initializer_list>
#include <cassert>
using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> parse_nested_parens(const string& paren_string) {
    vector<int> result;
    int max_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            max_depth++;
        } else if (c == ')') {
            max_depth--;
        }
        result.push_back(max_depth);
    }
    return result;
}

int main() {
    assert(same(parse_nested_parens("(()(())((()))")), vector<int>({0, 1, 2, 1, 0, -1, -2, -3, -4})));
    return 0;