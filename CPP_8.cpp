#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (unsigned int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

std::vector<int> sum_product(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());

    int sum = 0;
    int product = 1;

    for (int i = 0; i < numbers.size(); i++) {
        sum += numbers[i];
        product *= numbers[i];
    }

    return {sum, product};
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    std::vector<int> result = sum_product(numbers);

    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

    std::cout << std::endl;

    assert(issame(sum_product({10}), {10, 10}));

    return 0;
}