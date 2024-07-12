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
    assert(sum_squares({2, 3, 4}) == 29);
    assert(sum_squares({5, 6, 7}) == 110);
    assert(sum_squares({0.5, 1.5, 2.5}) == 9);
    assert(sum_squares({-2.5, -3.5, -4.5}) == 29);
    return 0;
}