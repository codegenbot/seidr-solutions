#include <iostream>
#include <vector>
#include <cmath>

int sum_squares(std::vector<float> lst){
    int sum = 0;
    for (auto num : lst) {
        int rounded_num = std::ceil(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}