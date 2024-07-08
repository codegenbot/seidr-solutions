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
    cout << "Enter the position of Fibonacci number: ";
    cin >> n;
    cout << "Fibonacci number at position " << n << " is " << fib(n) << endl;
    return 0;
}