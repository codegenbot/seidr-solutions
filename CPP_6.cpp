#include <iostream>
#include <vector>
#include <string>

std::vector<int> parse_nested_parens(std::string paren_string) {
    std::vector<int> levels;
    int max_level = 0;
    int current_level = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_level++;
            max_level = std::max(max_level, current_level);
        }
        else if (c == ')') {
            current_level--;
        }
        else if (c == ' ') {
            levels.push_back(max_level);
            max_level = 0;
            current_level = 0;
        }
    }

    levels.push_back(max_level);

    return levels;
}