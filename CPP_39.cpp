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
        string output = "-1";
        cout << output << endl;
    } else {
        cout << "The " << to_string(n) << "th prime Fibonacci number is: " << prime_fib(n) << endl;
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
        string temp = to_string(a + b);
        a =stoi(temp.substr(0, temp.find(" ")));
        b =stoi(temp.substr(temp.find(" ")+1));
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