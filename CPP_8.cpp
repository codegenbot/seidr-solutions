#include <vector>
#include <cassert>
#include <utility>

namespace mystd {
    using ::std::vector;
}

bool issame(mystd::vector<int> a, mystd::vector<int> b) {
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
    assert(issame(sum_product({10}), std::make_pair(10, 10)));
    return 0;
}