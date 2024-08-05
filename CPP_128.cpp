#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) {
        return -32768;
    }

    int product = 1;
    int sum = 0;
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        sum += num;
    }

    return product * sum;
}

int main() {
    std::vector<int> test1 = {3, -2, 4};
    std::vector<int> test2 = {};

    assert(prod_signs(test1) == -5);
    assert(prod_signs(test2) == -32768);
    assert(prod_signs({-1, 1, 1, 0}) == 0);

    return 0;
}