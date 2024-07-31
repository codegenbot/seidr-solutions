#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>

std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    return sum;
}

int main() {
    long long odd_sum;
    odd_sum = double_the_difference(lst);

    std::cout << odd_sum << std::endl;

    assert(double_the_difference(lst) == odd_sum);

    return 0;
}