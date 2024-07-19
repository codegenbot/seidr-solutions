#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::std::vector;
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a.first == b.first && a.second == b.second;  // Compare each element of the pair
}

std::pair<int, int> sum_product(const mystd::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}

int main() {
    auto result = sum_product({10});
    assert(issame(result, {10, 10}));
    return 0;
}