#include <cassert>
#include <vector>

std::vector<int> sum_product(const std::vector<int>& nums) {
    int sum = 0;
    int product = 1;
    for (int num : nums) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product(std::vector<int>{10}), std::vector<int>{10, 10}));
    return 0;
}