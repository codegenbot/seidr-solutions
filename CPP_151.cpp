#include <iostream>
#include <vector>
#include <cassert>

std::vector<float> lst;
long long int odd_sum = 0;

long long int double_the_difference(std::vector<float>& lst) {
    long long int sum = odd_sum;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long int)num * num;
        }
    }
    return sum;
}