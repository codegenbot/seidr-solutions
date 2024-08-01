#include <utility>
#include <cassert>
#include <vector>

std::pair<int, int> sum_product(const std::vector<int>& nums) {
    int sum = 0, product = 1;
    for (int num : nums) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}