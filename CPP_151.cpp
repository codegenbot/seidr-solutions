```cpp
#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5, 3.6, -4.7, 8.9};
    long long odd_sum;
    odd_sum = double_the_difference(lst);
    assert(double_the_difference(lst) == odd_sum); 
    std::cout << "The result is: " << odd_sum << std::endl;
    return 0;
}