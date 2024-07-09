#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

assert(vector<int>{1, 2, 3, 2, 1} == parse_nested_parens("( () (()()) )"));