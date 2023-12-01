#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] == std::floor(lst[i]) && static_cast<int>(lst[i]) % 2 != 0) {
            sum += std::pow(lst[i], 2);
        }
    }
    return sum;
}