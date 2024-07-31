#include <vector>
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

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}