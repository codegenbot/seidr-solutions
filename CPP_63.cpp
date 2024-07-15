#include <iostream>

int fibfib(int n) {
    if (n == 0 || n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }

    int a = 0, b = 0, c = 1, result = 0;

    for (int i = 3; i <= n; ++i) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;
    
    std::cout << "Result: " << fibfib(n) << std::endl;

    return 0;
}