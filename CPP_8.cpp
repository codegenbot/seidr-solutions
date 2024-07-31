#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> sum_product(const std::vector<int>& vec) {
    std::vector<int> result;
    for (int num : vec) {
        result.push_back(num);
        result.push_back(num);
    }
    return result;
}