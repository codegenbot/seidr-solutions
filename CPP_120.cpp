#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool isSame(int a, int b) {
    return a == b;
}

int maximum(const std::vector<int>& numbers, int value) {
    return *std::max_element(numbers.begin(), numbers.end());
}

int main() {
    assert(isSame(maximum(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, 0), 0);
    return 0;
}