#include <vector>
#include <cassert>

std::vector<int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;

    for (int num : numbers) {
        sum += num;
        product *= num;
    }

    return {sum, product};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

void main() {
    assert(issame({10, 10}, sum_product({10, 10})));
}