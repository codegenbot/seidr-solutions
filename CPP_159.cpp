#include <iostream>
#include <cassert>
#include <vector>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int number) {
    int eaten = 1;
    int remaining = number - eaten;
    return {eaten, remaining};
}

int main() {
    assert(issame(eat(5), {1, 4}));
    return 0;
}