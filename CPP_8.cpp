#include <iostream>
#include <cassert>
#include <utility>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(int num1, int num2) {
    int sum = num1 + num2;
    int product = num1 * num2;
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(sum_product(10, 0), std::make_pair(10, 0)));
    assert(issame(sum_product(10, 10), std::make_pair(20, 100));

    return 0;
}