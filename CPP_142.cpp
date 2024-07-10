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
        // You can add assert statement here to test the function with specific inputs
        // assert (sum_squares(-1) == 1 && sum_squares(5) == 55 && ...);

        std::cout << "Sum of squares: " << result << std::endl;
    }
}