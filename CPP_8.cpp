#include <iostream>
#include <vector>
#include <cassert>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
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