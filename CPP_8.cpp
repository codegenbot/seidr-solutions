#include <iostream>
#include <vector>
#include <cassert>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = numbers.first + numbers.second;
    int product = numbers.first * numbers.second;
    return { sum, product };
}

int main() {
    assert(issame(sum_product({10, 10}), std::make_pair(20, 100)));
    return 0;
}