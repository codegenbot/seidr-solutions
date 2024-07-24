#include <vector>
#include <cassert>
#include <utility>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(const std::pair<int, int>& numbers) {
    int sum = numbers.first + numbers.second;
    int product = numbers.first * numbers.second;
    return {sum, product};
}

int main() {
    assert(issame(sum_product({10, 0}), {10, 0}));
    return 0;
}