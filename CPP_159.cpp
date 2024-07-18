#include <iostream>
#include <cassert>
#include <vector>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int number) {
    int eaten = number + 1;
    int left = 0;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4), {5, 0}));
    return 0;
}