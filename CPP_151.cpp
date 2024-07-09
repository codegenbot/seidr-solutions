#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 2 != 0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.0f, 3.0f, 5.0f};
    long long odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}