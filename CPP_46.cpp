```
#include <iostream>
using namespace std;

int fib4(int n) {
    if (n <= 3) {
        return 0;
    } else if (n == 4) {
        return 2;
    } else {
        std::string::const_iterator it = fib4(n-1);
        std::string::const_iterator it2 = fib4(n-2);
        std::string::const_iterator it3 = fib4(n-3);
        return *it + *it2 + *it3;
    }
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The " << n << "-th Fibonacci number is: " << fib4(n) << endl;
    return 0;
}
```