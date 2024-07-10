#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;

float double_the_difference(std::vector<float>& lst) {
    float sum = 0.0;
    float odd_sum = 0.0;

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (float)num;
        }
    }

    sum = odd_sum * odd_sum;

    return sum;
}