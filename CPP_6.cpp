#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
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