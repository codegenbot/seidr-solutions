#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>
#include <array>

std::array<int, 2> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = remaining - eaten;
    return std::array<int, 2>{eaten, left};
}

int main() {
    assert(eat(4, 5, 1) == std::array<int, 2>{5, 1});
    return 0;
}