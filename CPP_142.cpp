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
    while (!(std::cin >> n)) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if(n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer.\n";
        return 1;
    } else {
        double result = sum_squares(n);
        std::cout << "Sum of squares: " << std::to_string(result) << std::endl;
        return 0;
    }
}