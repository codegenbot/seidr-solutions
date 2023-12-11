```
#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    string str = "The " + to_string(n) + "-th Fibonacci number is: " + to_string(fib4(n));
    cout << str._M_allocated_capacity << endl;
    return 0;
}
```