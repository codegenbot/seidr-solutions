#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm> 
#include <numeric>

double double_the_difference(std::vector<double> lst) {
    return std::accumulate(lst.begin(), lst.end(), 0.0, [](double x, double y) { 
        if (y > 0 && std::floor(y) == y) { 
            if (std::fmod(y, 2.0) != 0.0) { 
                return x + std::pow(y, 2);
            }
        }
        return x;
    });
}

int main() {
    int n, odd_sum = 0.0; // Declare variables before use
    std::vector<double> lst;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    
    for(int i = 0; i < n; i++) {
        double num;
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> num;
        lst.push_back(num);
    }
    
    odd_sum = double_the_difference(lst);

    return 0;
}