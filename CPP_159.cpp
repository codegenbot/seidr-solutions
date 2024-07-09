#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    return {total, std::max(0, remaining - eaten)};
}

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

#include <iostream>

int main() {
    assert(isSame(eat(4, 5, 1), {5, 0}));
    return 0;
}