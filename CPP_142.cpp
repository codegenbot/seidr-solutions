```cpp
#include <cmath>
#include <iostream>
#include <cassert>

double sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

int main_function() {
    int n;
    std::cin >> n;

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
    } else {
        double result = sum_squares(n);
        std::cout << "Sum of squares: " << std::to_string(result) << std::endl;
        return 0;
    }
}

assert(sum_squares(-1) == pow(-1,2) + pow(1,2) + pow(17,2) - pow(1,2) - pow(15,2) + pow(13,2) - pow(1,2) + pow(14,2) - pow(14,2) - pow(12,2) - pow(5,2));