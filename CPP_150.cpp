```
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
    int num, x, y;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "Enter x and y values separated by space: ";
    std::cin >> x >> y;
    std::cout << "The value is: " << x_or_y(num, x, y) << std::endl;
    return 0;
}