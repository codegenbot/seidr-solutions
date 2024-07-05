#include<stdio.h>
#include<vector>
#include<string>
using namespace std;

vector<int> parse_nested_parens(string paren_string){
    vector<int> nesting_levels;
    int max_depth = 0, current_depth = 0;
    for (char ch : paren_string) {
        if (ch == '(') {
            current_depth++;
            if (current_depth > max_depth)
                max_depth = current_depth;
        } else if (ch == ')') {
            current_depth--;
        } else if (ch == ' ') {
            nesting_levels.push_back(max_depth);
            max_depth = 0;
            current_depth = 0;
        }
    }
    // Push last group depth
    nesting_levels.push_back(max_depth);
    return nesting_levels;
}