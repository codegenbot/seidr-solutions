#include<iostream>
using namespace std;

int fib4(int n) {
    int fib[n+1];
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 2;
    fib[3] = 0;

    for (int i = 4; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2] + fib[i-3] + fib[i-4];
    }

    return fib[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "fib4(" << n << ") = " << fib4(n) << endl;

    return 0;
}