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
    }
    return 0; 
}

int main() {
    int n[] = {-1, -3, 17, -1, -15, 13, -1, 14, -14, -12, -5, 14, -14, 6, 13, 11, 16, 16, 4, 10};
    assert(sum_squares(20) == -1448); 
}