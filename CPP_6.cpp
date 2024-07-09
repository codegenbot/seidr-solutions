#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int maxLevel = 0;
    for (char c : paren_string) {
        if (c == '(') {
            maxLevel++;
        } else if (c == ')') {
            maxLevel--;
        }
        result.push_back(maxLevel);
    }
    return result;
}