#include <iostream>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int maxDepth = 0, currentDepth = 0;
    
    for (char c : paren_string) {
        if (c == '(') {
            currentDepth++;
            maxDepth = max(maxDepth, currentDepth);
        } else if (c == ')') {
            currentDepth--;
        }
    }
    
    result.push_back(maxDepth);
    return result;
}

int main() {
    string input = "(()()) ((())) () ((())()())";
    vector<int> output = parse_nested_parens(input);
    for (int i : output) {
        cout << i << " ";
    }
    return 0;
}