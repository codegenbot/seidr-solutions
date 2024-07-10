```cpp
#include <iostream>
#include <sstream>
using namespace std;

bool isPrime(int num); // Function prototype for isPrime()

int prime_fib(int n);

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = prime_fib(n);
    ostringstream oss; 
    oss << "The " << n << "th prime Fibonacci number is: " << result; 
    string str = ""; // Initialize with empty string
    if (n > 0) {
        str = oss.str(); // Access and store the stream's content
    }
    cout << str; 
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
        if (isPrime(b))
            count++;
        if (count == n)
            return b;
        a += b;
        b = a - b;
    }
}