#include<iostream>
using namespace std;

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    if (n == 2) {
        return 2;
    }
    int a = 0, b = 0, c = 2, d = 0;
    for (int i = 3; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return d;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "-th element of the fib4 number sequence is " << fib4(n) << endl;
    return 0;
}