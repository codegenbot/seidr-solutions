#include <iostream>
using namespace std;

int fib4(int n) {
    if (n == 0 || n == 1)
        return 0;
    else if (n == 2)
        return 2;
    
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
    
    int result = fib4(n);
    cout << "fib4(" << n << ") = " << result << endl;
    
    return 0;
}