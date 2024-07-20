#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

std::vector<float> lst = {1.0, 2.0, 3.0};

long long double_the_difference(const std::vector<float>& lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long)std::pow(num, 2);
        }
    }
    return 2 * odd_sum;
}

int main() {
    long long result = double_the_difference(lst);
    assert(double_the_difference(lst) == result);
    std::cout << result << std::endl;
    return 0;
}