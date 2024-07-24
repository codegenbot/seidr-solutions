#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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
    return 0;
}