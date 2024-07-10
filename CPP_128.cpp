#include <iostream>
#include <vector>
#include <cassert>

int prod_signs(std::vector<int> arr) {
    int result = -32768;
    if (!arr.empty()) {
        int sign_product = 1;
        for (int num : arr) {
            if (num != 0) {
                sign_product *= (num > 0 ? 1 : -1);
            }
        }
        result = 0;
        for (int num : arr) {
            result += std::abs(num) * sign_product;
        }
    }
    return result;
}

int main() {
    assert(prod_signs({-1, 1, 1, 0}) == 0);
    // Your code goes here
}