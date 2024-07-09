```
#include <iostream>
#include <vector>

long long double_the_difference(std::vector<double> lst) {
    long long sum = 0;
    for (double num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (static_cast<long long>(num) % 2 != 0) { 
                sum += static_cast<long long>(std::pow(num, 2)); 
            }
        }
    }
    return static_cast<long long>(sum);
}

int main() {
    double input; 
    int n = 0; 
    std::vector<double> lst;
    
    while (1) {
        std::cout << "Enter a number (negative to stop): ";
        std::cin >> input;
        
        if (input < 0) break;
        lst.push_back(input);
        n++;
    }
    
    long long odd_sum = double_the_difference(lst);
    return 0;
}