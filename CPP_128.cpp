#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int sum = 0;
    int product = 1;

    for (int num : arr) {
        if (num > 0) {
            sum += num;
        } else if (num < 0) {
            sum -= num;
            product *= -1;
        }
    }

    return sum * product;
}

int main() {
    assert (prod_signs({-1, 1, 1, 0}) == 0);
    return 0;
}