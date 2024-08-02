#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        while (a > 0) {
            sum_a += a % 2;
            a /= 2;
        }
        while (b > 0) {
            sum_b += b % 2;
            b /= 2;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return arr;
}

int main() {
    assert(issame(sort_array({2, 4, 8, 16, 32}), {32, 2, 4, 8, 16}));
    return 0;
}