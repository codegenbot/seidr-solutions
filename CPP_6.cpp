#include <iostream>
#include <vector>
#include <string>
#include <cassert>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int max_depth = 0, current_depth = 0;
    for (char ch : paren_string) {
        if (ch == '(') {
            current_depth++;
            if (current_depth > max_depth) {
                max_depth = current_depth;
            }
        } else if (ch == ')') {
            current_depth--;
        } else if (ch == ' ') {
            result.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    result.push_back(max_depth);
    return result;
}

int main() {
    assert(parse_nested_parens("(()(())((())))") == vector<int>{4});
    assert(parse_nested_parens("() (()) ((()))") == vector<int>{1, 2, 3});
    cout << "All tests passed!" << endl;
    return 0;
}