#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::pair<int, int>& b) {
    return a[0] == b.first && a[1] == b.second;
}

std::pair<int, int> sum_product(int num1, int num2) {
    int sum = num1 + num2;
    int product = num1 * num2;
    return std::make_pair(sum, product);
}

int main() {
    assert(issame(std::vector<int>{20, 100}, sum_product(10, 10)));
    return 0;
}