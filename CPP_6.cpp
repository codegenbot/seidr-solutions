#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> results;
    int max_depth = 0, current_depth = 0;

    for (char ch : paren_string) {
        if (ch == '(') {
            current_depth++;
            if (current_depth > max_depth) max_depth = current_depth;
        } else if (ch == ')') {
            current_depth--;
        } else if (ch == ' ') {
            results.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }

    results.push_back(max_depth); // Add the last group's depth
    return results;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(parse_nested_parens("(()(())((())))"), {4}));
    return 0;
}