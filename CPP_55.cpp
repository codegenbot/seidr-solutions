```
#include <iostream>
using namespace std;

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << "Fibonacci number at position " << n << " is: " << fib(n) << endl;
    return 0;
}
```
The code above only has one definition of the `main()` function, so it should compile and run correctly.