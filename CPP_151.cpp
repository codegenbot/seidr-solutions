#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(const std::vector<float>& lst);

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == std::floor(num) && (int)num % 2 != 0) {
            sum += static_cast<long long>(std::pow(num, 2));
        }
    }
    return sum;
}