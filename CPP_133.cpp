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