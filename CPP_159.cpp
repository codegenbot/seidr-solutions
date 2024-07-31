#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int val1, int val2, int val3) {
    return {val1 + val2, val1 - val3};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}