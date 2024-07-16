#include <vector>
#include <cmath>
#include <cassert>
#include <iostream>

long double double_the_difference(std::vector<float> &lst);

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0};
    long double odd_sum = double_the_difference(lst);
    
    assert(double_the_difference(lst) == odd_sum);
    
    return 0;
}

long double double_the_difference(std::vector<float> &lst){
    long double sum = 0;
    for (float num : lst) {
        if (num > 0 && num == std::floor(num) && ((int)num) % 2 != 0) {
            sum += std::pow(num, 2.0);
        }
    }
    return sum * 2.0;
}