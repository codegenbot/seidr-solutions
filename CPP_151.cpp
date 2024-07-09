#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (static_cast<long long>(num) % 2 != 0) { 
                sum += std::pow(num, 2); 
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 2.8f};
    long long odd_sum = double_the_difference(lst);
    return 0;
}