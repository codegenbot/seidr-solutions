#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

assert(vector<int>{2, 3, 1, 2} == parse_nested_parens("( ( ) ( ( ) ) )"));