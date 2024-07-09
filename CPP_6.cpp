#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

assert(vector<int>{1, 2, 3} == parse_nested_parens("( ( ) ) ( ( ( ) ) )"));