#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(double a, double b) {
    return 2 * std::fabs(a - b);
}

int main() {
    std::vector<float> lst = {1.5, 2.0, 3.0, 4.5, 5.0};
    long long odd_sum = 0;

    for (float num : lst) {
        if (num > 0 && num == static_cast<int>(num) && static_cast<int>(num) % 2 != 0) {
            odd_sum += static_cast<long long>(num * num);
        }
    }

    assert(double_the_difference(odd_sum, 100.0) == 17200.0);

    return 0;
}