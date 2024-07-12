```cpp
#include <iostream>
#include <string>

int starts_one_ends(int n); // Forward declaration of the function

int main() {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    if (n > 0) {
        std::cout << "The count of the numbers that start or end with 1 is: " << starts_one_ends(n) << std::endl;
    } else {
        std::cout << "Invalid input. Please enter a positive integer." << std::endl;
    }
    return 0;
}

int starts_one_ends(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 1 || i % 100 >= 11 && i % 100 < 20) {
            count++;
        }
    }
    return count;
}