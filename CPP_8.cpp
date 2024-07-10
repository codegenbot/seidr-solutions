#include <vector>

std::pair<int, int> sum_product(const std::vector<int>& numbers) {
    int sum = 0, product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    std::vector<int> numbers = {2, 3, 4};
    auto result = sum_product(numbers);
    return 0;
}