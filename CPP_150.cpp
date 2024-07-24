```cpp
#include <iostream>

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false;
    }
    return true;
}

int x_or_y(int n, int x, int y) {
    if (isPrime(n))
        return x;
    else
        return y;
}

int main() {
    int n, x, y;

    // Input number, and two other numbers from the user
    std::cout << "Enter a number: ";
    std::cin >> n;
    std::cout << "Enter a value for 'x': ";
    std::cin >> x;
    std::cout << "Enter a value for 'y': ";
    std::cin >> y;

    // Print the returned value
    int result = x_or_y(n, x, y);
    std::cout << "Result: " << result << "\n";

    return 0;
}