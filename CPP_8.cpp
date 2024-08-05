#include <utility>
#include <cassert>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0, product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

assert(issame(sum_product({10}), {10, 10}));