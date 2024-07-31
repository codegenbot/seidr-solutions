
#include <vector>
#include <cassert>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return a == b;
}

int main() {
    std::pair<int, int> sum_product_result = sum_product({10});
    assert(issame(sum_product_result, {10, 10}));

    return 0;
}