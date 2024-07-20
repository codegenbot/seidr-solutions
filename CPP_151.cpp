#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long double double_the_difference(const std::vector<float>& lst) {
    long double odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long double)std::pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0};
    long double odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    std::cout << odd_sum << std::endl;
    return 0;
}