#include <iostream>
#include <cmath>
#include <initializer_list>

int sum_squares(std::initializer_list<double> lst) {
    int total = 0;
    for (double num : lst) {
        int ceil_num = std::ceil(num);
        total += std::pow(ceil_num, 2);
    }
    return total;

}