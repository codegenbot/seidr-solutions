```
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    const char* str = "The " + to_string(n) + "-th Fibonacci number is: " + to_string(fib4(n));
    cout << str << endl;
    return 0;
}
```