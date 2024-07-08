```
#include <iostream>
#include <cstdio>

using namespace std;

int fib4(int n) {
    if (n <= 1)
        return 0;
    int a = 0, b = 2, c = 0, d = 2;
    for (int i = 3; i <= n; i++) {
        int temp = a + b + c + d;
        a = b;
        b = c;
        c = d;
        d = temp;
    }
    return d;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "-th element of the fib4 number sequence is: " << fib4(n) << endl;
    return 0;
}