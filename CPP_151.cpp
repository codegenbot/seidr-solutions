```cpp
#include <cmath>
#include <vector>
#include <algorithm> 
#include <numeric>
#include <iostream>

double double_the_difference(std::vector<double> lst) {
    return std::sqrt(std::accumulate(lst.begin(), lst.end(), 0.0,
        [y](double s, double y) {
            if (y > 0 && std::floor(y) == y) { 
                if (std::fmod(y, 2.0) != 0.0) { 
                    return s + std::pow(y, 2);
                }
            }
            return s;
        }));
}

void calculateOddSums(std::vector<double> lst) {
    double total_sum = 0;
    for(double y : lst) {
        if (y > 0 && std::floor(y) == y) { 
            if (std::fmod(y, 2.0) != 0.0) { 
                total_sum += y;
            }
        }
    }
    double average = (total_sum / std::count_if(lst.begin(), lst.end(),
        [](double x) { 
            return x > 0 && std::floor(x) == x && std::fmod(x, 2.0) != 0.0; 
        }));
    std::cout << "Average of odd numbers: " << average << std::endl;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    if(n < 0) {
        std::cout << "Please enter a non-negative number." << std::endl;
        return -1;
    }
    
    std::vector<double> lst;
    for(int i = 0; i < n; i++) {
        double num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    double odd_sum = double_the_difference(lst);

    calculateOddSums(lst);

    return 0;
}