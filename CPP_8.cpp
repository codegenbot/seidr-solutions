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
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    auto result = sum_product(numbers);

    assert(result.first == 15); // Sum of numbers
    assert(result.second == 120); // Product of numbers

    std::vector<int> a = {1, 2, 3};
    std::vector<int> b = {1, 2, 3};

    assert(issame(a, b)); // Check if vectors are the same

    return 0;
}