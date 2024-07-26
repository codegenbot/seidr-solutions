#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}