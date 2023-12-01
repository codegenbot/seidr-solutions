#include <iostream>
using namespace std;

int fib4(int n) {
    if (n < 2) {
        return 0;
    }
    
    int fib[4] = {0, 0, 2, 0};
    
    for (int i = 4; i <= n; i++) {
        fib[i % 4] = fib[(i-1) % 4] + fib[(i-2) % 4] + fib[(i-3) % 4] + fib[(i-4) % 4];
    }
    
    return fib[n % 4];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "fib4(" << n << ") = " << fib4(n) << endl;
    
    return 0;
}