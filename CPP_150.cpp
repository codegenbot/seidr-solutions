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
    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;
    int result = x_or_y(num, x, y);
    std::cout << "Result: " << result << std::endl;
    return 0;
}