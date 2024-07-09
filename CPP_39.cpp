#include <iostream>
using namespace std;

bool isPrime(int num); // Function prototype for isPrime()

int prime_fib(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl; 
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
    if (n <= 0)
        return -1;

    int a = 0, b = 1, count = 0;
    while (true) {
        string str = to_string(b); // Convert int to string
        if (isPrime(stoi(str))) // Convert string back to int for isPrime()
            count++;
        if (count == n)
            return stoi(str); // Convert int back to string and return
        a += b;
        b = a - b;
    }
}