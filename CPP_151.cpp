```cpp
#include <cmath>
#include <vector>
#include <algorithm> 
#include <numeric>
#include <iostream>

double double_the_difference(std::vector<double> lst) {
    double odd_sum = 0;
    for(double y : lst) {
        if (y > 0 && std::floor(y) == y) { 
            if (std::fmod(y, 2.0) != 0.0) { 
                odd_sum += std::pow(y, 2);
            }
        }
    }
    return odd_sum;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    std::vector<double> lst;
    for(int i = 0; i < n; i++) {
        double num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    double result = double_the_difference(lst);

    return 0;
}