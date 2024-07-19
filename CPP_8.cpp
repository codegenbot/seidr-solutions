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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> numbers = {2, 3, 4};
    auto result = sum_product(numbers);
    assert(result.first == 9);
    assert(result.second == 24);

    std::vector<int> numbers2 = {2, 3, 4};
    assert(issame(numbers, numbers2));

    return 0;
}