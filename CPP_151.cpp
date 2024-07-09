```cpp
#include <iostream>
#include <vector>
#include <cmath>

long long double_the_difference(std::vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && std::floor(num) == num) { 
            if (static_cast<long long>(num) % 2 != 0) { 
                sum += static_cast<long long>(std::pow(num, 2)); 
            }
        }
    }
    return static_cast<long long>(sum);
}

int main() {
    float input; 
    int n = 0;
    std::vector<float> lst;

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