#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { 
            if (x % 2 != 0) { 
                odd_sum += pow(x, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst;
    long long odd_sum = 0;
    
    // Input your code here
    
    return double_the_difference(lst);
}