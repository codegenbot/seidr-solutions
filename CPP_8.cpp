#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::std::vector;
}

bool issame(const mystd::vector<int>& a, const mystd::vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1];  // Compare each element of the pair
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