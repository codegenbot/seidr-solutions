#include <cmath>
#include <iostream>

int sum_squares(int n) {
    double sum = 0.0;
    for (int i = 1; i <= n; ++i) {
        sum += pow(i, 2);
    }
    return static_cast<int>(sum);
}

int main() {
    int n;
    std::cin >> n;

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        int result = sum_squares(n);
        std::cout << "Sum of squares: " << result << std::endl;
        
        // Test the function with different inputs
        for(int i = 0; i <= 5; ++i) {
            std::cout << "Sum of squares for " << i << ": " << sum_squares(i) << std::endl;
        }
    }
}