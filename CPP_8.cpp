#include <vector>
bool issame(std::vector<int> a, std::vector<int> b) {
    auto [sumA, productA] = sum_product(a);
    auto [sumB, productB] = sum_product(b);
    return std::make_pair(sumA, productA) == std::make_pair(sumB, productB);
}

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return std::make_pair(sum, product);
}