#include <cassert>
#include <vector>
#include <algorithm>

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
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}