#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::vector;
}

bool issame(const mystd::vector<int>& a, const mystd::vector<int>& b) {
    return a[0] == b[0] && a[1] == b[1];
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
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}