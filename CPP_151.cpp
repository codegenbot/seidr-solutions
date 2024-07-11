#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (num % 1 != 0) { 
                odd_sum += pow(num, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst = {1.0f, 2.0f, 3.0f};
    float odd_sum = 0;
    assert(double_the_difference(lst) == odd_sum);
    return 0;
}