#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::vector<int>& b) {
    return a.first == b[0] && a.second == b[1];
}

std::pair<int, int> sum_product(int num1, int num2) {
    int sum = num1 + num2;
    int product = num1 * num2;
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(sum_product(20, 5), {25, 100}));
    assert(issame(sum_product(10, 10), {20, 100}));
    return 0;
}