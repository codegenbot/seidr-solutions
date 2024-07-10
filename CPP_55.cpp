#include <iostream>

using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    int a = 0, b = 1, result = 0;
    for (int i = 2; i <= n; i++) {
        result = a + b;
        a = b;
        b = result;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << n << "-th Fibonacci number is: " << fib(n) << endl;
    return 0;
}