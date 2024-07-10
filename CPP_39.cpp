```cpp
#include <iostream>
using namespace std;

bool isPrime(int num); // Function prototype for isPrime()

int prime_fib(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if (n <= 0) {
        cout << "Invalid input. Please enter a positive integer." << endl;
    } else {
        int result = prime_fib(n);
        if (result == -1) {
            cout << "There is no " << n << "th prime Fibonacci number." << endl;
        } else {
            cout << "The " << n << "th prime Fibonacci number is: " << result << endl;
        }
    }
}

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, count = 0;
    while (true) {
        if (isPrime(b))
            count++;
        if (count == n)
            return b;
        a += b;
        b = a - b;
    }
}