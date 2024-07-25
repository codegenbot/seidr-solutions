```cpp
#include <vector>
#include <cmath>
#include <iostream>

double double_the_difference(std::vector<float> lst) {
    double sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (num % 1 != 0) { 
                sum += std::pow(num, 2);
            }
        }
    }
    return sum;
}

int main() {
    std::vector<float> lst = {1.5f, 3.8f, -2.2f, 4.9f, 0.7f};
    double odd_sum = double_the_difference(lst); 
    std::cout << "The result is: " << odd_sum << std::endl;
    
    return 0;
}