#include <iostream>
#include <vector>
#include <cmath>
#include <cassert> // Include assert library for assertion check

long long double_the_difference(const std::vector<float>& lst) {
    long long sum = 0;
    
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += (long long)pow(num, 2);
        }
    }
    
    return sum;
}

int main() {
    std::vector<float> lst = {1.0, 2.0, 3.0, 4.0, 5.0}; // Define lst variable in main
    long long odd_sum = double_the_difference(lst); // Define odd_sum variable in main
    std::cout << odd_sum;
    
    assert(double_the_difference(lst) == odd_sum); // Use assert for checking
    
    return 0;
}