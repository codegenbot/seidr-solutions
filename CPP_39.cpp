```cpp
#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num); 

int prime_fib(int n);

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n <= 0) {
        cout << "-1" << endl;
    } else {
        string str = (n == 1 ? "The first" : (n == 2 ? "The second" : "The " + to_string(n) + "th")) + " prime Fibonacci number is: ";
        cout << str << prime_fib(n) << endl;
    }
}

int prime_fib(int n) {
    if (n <= 0)
        return -1; 
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

bool isPrime(int num) {
    if (num <= 1)
        return false; 
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}