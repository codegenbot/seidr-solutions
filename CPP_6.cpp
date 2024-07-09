#include <vector>

bool isSame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(isSame(parse_nested_parens("(()(())((()))") ,{4}));
    return 0;
}