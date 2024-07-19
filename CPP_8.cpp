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
    assert(issame(std::vector<int>{20, 100}, sum_product(20, 5)));
    assert(issame(sum_product(10, 10), std::vector<int>{20, 100}));
    
    return 0;
}