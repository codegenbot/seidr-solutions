#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;
long long int odd_sum = 0;

long long int double_the_difference(std::vector<float> lst) {
    long long int sum = 0;
    odd_sum = 0;

    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += (long long int)num;
        }
    }

    sum = odd_sum * odd_sum;

    return sum;
}