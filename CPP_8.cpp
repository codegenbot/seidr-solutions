#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(int num1, int num2) {
    int sum = num1 + num2;
    int product = num1 * num2;
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(sum_product(25, 5), std::vector<int>{25, 100}));
    assert(issame(sum_product(20, 5), std::vector<int>{25, 100}));
    return 0;
}