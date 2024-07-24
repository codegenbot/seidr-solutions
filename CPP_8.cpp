#include <iostream>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = numbers.first + numbers.second;
    int product = numbers.first * numbers.second;
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(sum_product(std::make_pair(10, 0)), std::make_pair(10, 0)));
    assert(issame(sum_product(std::make_pair(10, 10)), std::make_pair(20, 100)));

    std::pair<int, int> temp_pair = std::make_pair(10, 10);
    assert(issame(sum_product(temp_pair), std::make_pair(20, 100)));

    return 0;
}