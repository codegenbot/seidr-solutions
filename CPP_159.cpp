#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {a + b, b + c};
}

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(areEqual(eat(4, 5, 1), {9, 6}));
    return 0;
}