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
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    int result = x_or_y(num, 1, 2);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}