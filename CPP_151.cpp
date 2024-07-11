#include <iostream>
#include <vector>

long long double_the_difference(std::vector<float> lst) {
    long long odd_sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 2 != 0) { 
                odd_sum += std::pow(num, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    std::vector<float> lst;  
    long long result = double_the_difference(lst);
    std::cout << result << std::endl;
}