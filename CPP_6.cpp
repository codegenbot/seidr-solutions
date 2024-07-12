#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> result;
    int maxLevel = 0;
    int currentLevel = 0;

    for (char c : paren_string) {
        if (c == '(') {
            currentLevel++;
            maxLevel = max(maxLevel, currentLevel);
        } else if (c == ')') {
            currentLevel--;
        }
    }

    result.push_back(maxLevel);

    return result;
}