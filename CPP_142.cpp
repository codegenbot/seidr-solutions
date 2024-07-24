```cpp
#include <iostream>

int sum_squares(int n);

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "Sum of squares is: " << sum_squares(n) << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }
    return 0;
}

int sum_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i * i;
    }
    return sum;
}