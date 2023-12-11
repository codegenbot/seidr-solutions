```
#include <iostream>
using namespace std;

int fib4(int n) {
    if (n <= 3) {
        return 0;
    } else if (n == 4) {
        return 2;
    } else {
        int a = fib4(n-1);
        int b = fib4(n-2);
        int c = fib4(n-3);
        int d = fib4(n-4);
        return a + b + c + d;
    }
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    string str;
    str.assign("The ");
    str += to_string(n);
    str += "-th Fibonacci number is: ";
    str += std::to_string(fib4(n));
    cout << str << endl;
    return 0;
}
```