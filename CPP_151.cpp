#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;
double odd_sum = 0.0;

double double_the_difference(std::vector<float> lst) {
    double sum = 0.0;
    odd_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (double)num;
        }
    }

    sum = odd_sum * odd_sum;

    return sum;
}