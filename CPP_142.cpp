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
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
    } else {
        double result = sum_squares(n);
        std::cout << "Sum of squares: " << std::to_string(result) << std::endl;
    }
    assert(sum_squares(-1) == -1 + 1 + 289 - 1 - 225 + 169 - 1 + 196 - 196 - 144 - 25);
}