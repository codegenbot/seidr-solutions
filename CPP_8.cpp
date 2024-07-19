#include <vector>
#include <cassert>

std::vector<int> sum_product(const std::vector<int>& a) {
    int sum = 0, product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(sum_product({10}), {10, 10}));
    return 0;
}