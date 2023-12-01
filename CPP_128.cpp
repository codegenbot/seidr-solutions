#include <vector>
#include <cassert>
#include <iostream>

int prod_signs(std::vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }
    int product = 1;
    for (int i = 0; i < arr.size(); i++) {
        product *= arr[i] >= 0 ? 1 : -1;
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += std::abs(arr[i]);
    }
    return product * sum;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    // Add more test cases if needed
    return 0;
}