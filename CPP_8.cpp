#include <vector>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sum_product(std::vector<int> a) {
    int sum = 0, product = 1;
    for (int num : a) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    assert(is_same(sum_product({10}), {10, 10}));
    return 0;
}