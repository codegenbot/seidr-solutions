#include <iostream>
using namespace std;

int fib4(int n) {
    if (n == 0 || n == 1) {
        return 0;
    }
    
    int a = 0;
    int b = 2;
    int c = 0;
    int d = 0;
    
    for (int i = 2; i <= n; i++) {
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    
    return c;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "fib4(" << n << ") = " << fib4(n) << endl;
    
    return 0;
}