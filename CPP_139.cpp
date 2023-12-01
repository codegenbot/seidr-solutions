#include <iostream>

long long special_factorial(int n) {
    long long result = 1;
    for (int i = n; i >= 1; i--) {
        long long factorial = 1;
        for (int j = i; j >= 1; j--) {
            factorial *= j;
        }
        result *= factorial;
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    std::cout << "Special Factorial: " << special_factorial(n) << std::endl;
    return 0;
}