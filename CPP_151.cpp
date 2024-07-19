#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(float num1, float num2) {
    return 2 * std::abs(num1 - num2);
}

long long odd_sum(const std::vector<float>& lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)std::pow(num, 2);
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    std::cout << odd_sum(lst) << std::endl;

    return 0;
}