#include <iostream>
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
    assert(issame(sum_product({10}), {10, 10}));
    // Add more test cases here if needed
    return 0;
}