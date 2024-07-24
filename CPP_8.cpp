#include <vector>
#include <cassert>
#include <utility>

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return {0, 0};
    }
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

assert(issame(sum_product({10}), {10, 10}));