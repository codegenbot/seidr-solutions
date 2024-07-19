#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> parse_nested_parens(string paren_string);
bool issame(std::vector<int> a, std::vector<int> b);

vector<int> parse_nested_parens(string paren_string) {
    vector<int> depths;
    int max_depth = 0;
    int current_depth = 0;

    for (char c : paren_string) {
        if (c == '(') {
            current_depth++;
            max_depth = max(max_depth, current_depth);
        } else if (c == ')') {
            current_depth--;
        }
    }

    depths.push_back(max_depth);

    return depths;
}