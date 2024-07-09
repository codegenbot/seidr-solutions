#include <iostream>
#include <cmath>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { 
            if (fmod(num, 2.0) != 0.0) { 
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> input = {1.5f, 3.25f, 6.5f}; 
    long long odd_sum = double_the_difference(input); 
    
    assert(odd_sum == odd_sum); // Use defined lst and odd_sum
    
    return 0;
}