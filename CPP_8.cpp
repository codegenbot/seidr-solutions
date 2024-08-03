#include <vector>
#include <numeric>

namespace std {
    using vector;
    using int;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sum_product(const std::vector<int>& v) {
    int sum = 0, product = 1;
    for (auto num : v) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}