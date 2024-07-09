```cpp
#include <iostream>
using namespace std;

int prime_fib(int n);  // Function declaration

int main() {
    int n = 0; 
    cout << "Enter a number: ";
    cin >> n;
    if(n > 0) {
        cout << "The " << n << "th prime Fibonacci number is: " << to_string(prime_fib(n)) << endl;
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
}

int prime_fib(int n) {
}