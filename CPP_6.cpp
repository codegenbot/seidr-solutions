#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> parse_nested_parens(string paren_string) {
    vector<int> levels;
    int max_level = 0;
    int current_level = 0;

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            current_level++;
            max_level = max(max_level, current_level);
        } else if (paren_string[i] == ')') {
            current_level--;
        }
    }

    for (int i = 0; i < paren_string.size(); i++) {
        if (paren_string[i] == '(') {
            current_level++;
            if (current_level == max_level) {
                levels.push_back(max_level);
            }
        } else if (paren_string[i] == ')') {
            if (current_level == max_level) {
                levels.push_back(max_level);
            }
            current_level--;
        }
    }

    return levels;
}