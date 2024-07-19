#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::std::vector;
}

bool issame(int a, int b) {
    return a == b;
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
    assert(issame(result.first, 10) && issame(result.second, 10));
    return 0;
}