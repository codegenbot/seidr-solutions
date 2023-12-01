#include <iostream>

int fibfib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        int a = 0, b = 1, c = 1, d;
        for (int i = 3; i <= n; i++) {
            d = a + b + c;
            a = b;
            b = c;
            c = d;
        }
        return c;
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "The " << n << "-th element of the fibfib number sequence is: " << fibfib(n) << std::endl;
    return 0;
}