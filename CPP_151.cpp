```cpp
#include <vector>
#include <cmath>
#include <iostream>
#include <initializer_list>

long long double_the_difference(std::initializer_list<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && std::floor((double)num) == num) { 
            if (std::fmod((double)num, 2.0) != 0.0) { 
                sum += pow((double)num, 2);
            }
        }
    }
    return sum;
}

int main() {
    long long odd_sum;
    odd_sum = double_the_difference({1, 3, 5});
    std::cout << "The sum of squares of odd numbers is: " << odd_sum << std::endl;
    return 0;
}