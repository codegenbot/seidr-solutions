#include <vector>
#include <algorithm>
#include <cassert>

namespace my_namespace {
    bool issame(const std::vector<int>& a, const std::vector<int>& b);
    std::vector<int> sum_product(const std::vector<int>& vec);

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
}

int main() {
    assert(my_namespace::issame(my_namespace::sum_product({10}), {10, 10}));
    return 0;
}