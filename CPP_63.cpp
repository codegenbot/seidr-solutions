#include <iostream>

int fibfib(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    int a = 0;
    int b = 0;
    int c = 1;

    for (int i = 3; i <= n; i++) {
        int temp = a + b + c;
        a = b;
        b = c;
        c = temp;
    }

    return c;
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "fibfib(" << n << ") = " << fibfib(n) << std::endl;
    return 0;
}