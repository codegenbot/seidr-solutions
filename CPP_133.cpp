#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        int rounded = std::ceil(num);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    assert(sum_squares({-1, 1, 0}) == 2);
    assert(sum_squares({2.5, 3.7, -4.1}) == 32);
    return 0;
}