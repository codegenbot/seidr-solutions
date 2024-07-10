```
#include <cmath>
#include <iostream>

double sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return sum;
}

int main() { 
    int n;
    std::cin >> n;

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        double result = sum_squares(n);
        std::cout << "Sum of squares: " << result << std::endl;
    }
    return 0; 
}