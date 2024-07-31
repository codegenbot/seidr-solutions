#include <vector>
#include <cassert>

std::pair<int, int> calculate_sum_product(const std::vector<int>& numbers) {
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

int main() {
    std::pair<int, int> sum_product_res = calculate_sum_product({10});
    assert(issame(std::vector<int>{sum_product_res.first, sum_product_res.second}, {10, 10}));

    return 0;
}