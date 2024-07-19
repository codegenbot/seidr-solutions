#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::vector;
}

bool issame(const mystd::vector<int>& a, const mystd::vector<int>& b) {
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
    assert(issame(result, std::make_pair(10, 10)));
    return 0;
}