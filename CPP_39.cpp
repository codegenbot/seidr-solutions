```cpp
#include <iostream>
using namespace std;

int prime_fib(int n);  // Function declaration

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << to_string(n) << "th prime Fibonacci number is: " << to_string(prime_fib(n)) << endl;
}

int prime_fib(int n) {
}