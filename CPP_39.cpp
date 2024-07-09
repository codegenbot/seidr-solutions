#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num);  

int prime_fib(int n);  

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << to_string(n) << "th prime Fibonacci number is: " << to_string(prime_fib(n)) << endl;
}

bool isPrime(int num) {
    if (num <= 1)
        return false; // Prime numbers are greater than 1
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    if (n <= 0)
        return -1; // Return -1 for invalid input
    int a = 1, b = 1, count = 2;
    while (true) {
        if (isPrime(b))
            if (++count == n)
                return b;
        int temp = a + b;
        a = b;
        b = temp;
    }
}