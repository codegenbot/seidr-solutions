#include <iostream>
#include <utility>
#include <vector>
#include <cassert>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = numbers.first + numbers.second;
    int product = numbers.first * numbers.second;
    return std::make_pair(sum, product);
}

int main() {
    auto result = sum_product(std::make_pair(10, 10));
    assert(issame(result, std::make_pair(20, 100)));
    return 0;
}