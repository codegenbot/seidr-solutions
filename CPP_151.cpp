#include <iostream>
#include <vector>
#include <cmath>

double double_the_difference(double a, double b) {
    return 2 * (a - b);
}

long long main_function(std::vector<float> lst) {
    std::vector<float> lst;
    double double_the_difference;
    long long odd_sum = 0;

    for (float num : lst) {
        if (num > 0 && fmod(num, 1) == 0 && ((int)num) % 2 != 0) {
            odd_sum += (long long)pow(num, 2);
        }
    }
    return odd_sum;
}