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
    int test_cases[1] = {{17}};
    for (int i = 0; i < 1; ++i) {
        if(sum_squares(test_cases[i]) != -1448) {
            std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
        } else {
            int n;
            std::cin >> n;

            if(n < 0) {
                std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
            } else {
                std::cout << sum_squares(n) << std::endl;
            }
        }
    }
}