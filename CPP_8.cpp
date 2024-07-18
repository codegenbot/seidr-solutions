#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> sum_product(std::vector<int> numbers) {
    int sum = 0;
    int product = 1;
    for (int num : numbers) {
        sum += num;
        product *= num;
    }
    return {sum, product};
}

int main() {
    std::pair<int, int> result = sum_product(std::vector<int>{10});
    assert(issame(result, std::pair<int, int>{10, 10}));
    return 0;
}