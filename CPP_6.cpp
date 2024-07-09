#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int current_depth = 0;
    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
        } else if (c == ')') {
            current_depth--;
        }
        result.push_back(current_depth);
    }
    return result;
}