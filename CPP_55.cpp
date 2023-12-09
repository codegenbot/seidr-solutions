#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}

/*
 * Function to calculate the nth Fibonacci number.
 */
int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}