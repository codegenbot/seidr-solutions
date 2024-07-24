```cpp
#include <iostream>
#include <string>

int sum_squares(int n) {
    int total = 0;
    for (int i = 1; i * i <= n; ++i) {
        total += i * i;
    }
    return total;
}

int main2() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 0) {
        char buff[50]; 
        sprintf(buff, "Sum of squares is: %d", sum_squares(n)); 
        std::cout << buff << std::endl;
    } else {
        std::cout << "Please enter a positive integer.\n";
    }
    return 0;
}