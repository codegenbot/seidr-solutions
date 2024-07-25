#include <iostream>
#include <list>

double double_the_difference(std::list<double> lst) {
    double odd_sum = 0;
    for (auto num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            odd_sum += num * num;
        }
    }
    return odd_sum;
}