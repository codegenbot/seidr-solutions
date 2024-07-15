#include <vector>
#include <cassert>
#include <iostream>

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num > 0) product *= 1;
        else if (num < 0) product *= -1;

        sum += abs(num);
    }

    return product * sum;
}

int main() {
    std::vector<int> testArr = {2, -3, 4, -5};
    assert(prod_signs(testArr) == -14);

    testArr = {1, 2, 3, 4, 5};
    assert(prod_signs(testArr) == 15);

    testArr = {-1, -2, -3};
    assert(prod_signs(testArr) == -6);

    testArr = {};
    assert(prod_signs(testArr) == -32768);

    return 0;
}