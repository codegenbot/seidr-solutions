#include <iostream>
using namespace std;

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    
    int fib[n + 1];
    fib[0] = 0;
    fib[1] = 0;
    fib[2] = 2;
    fib[3] = 0;
    
    for (int i = 4; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2] + fib[i - 3] + fib[i - 4];
    }
    
    return fib[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "The " << n << "-th element of the fib4 number sequence is: " << fib4(n) << endl;
    
    return 0;
}