#include <cmath>
#include <iostream>

int sum_of_squares(int n) {
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
        int result = sum_of_squares(n);
        std::cout << "Sum of squares: " << result << std::endl;
    }

    if (sum_of_squares(1) == 1)
        std::cout << "Test for n=1 passed." << std::endl;
    else
        std::cout << "Test for n=1 failed." << std::endl;

    if (sum_of_squares(2) == 5)
        std::cout << "Test for n=2 passed." << std::endl;
    else
        std::cout << "Test for n=2 failed." << std::endl;
}