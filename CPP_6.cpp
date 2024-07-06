#include <iostream>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int maxDepth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            maxDepth++;
        } else if (c == ')') {
            maxDepth--;
        }
        result.push_back(maxDepth);
    }
    return result;
}

int main() {
    string s = "(()()) ((())) () ((())()())";
    vector<int> res = parse_nested_parens(s);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}