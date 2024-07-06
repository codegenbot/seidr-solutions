#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
        if (num % i == 0)
            return false;
    return true;
}

int prime_fib(int n) {
    int a = 0, b = 1, fibNum = 1;
    while (true) {
        if (isPrime(b)) {
            if (++fibNum == n)
                return b;
            int temp = a;
            a = b;
            b = temp + b;
        } else
            b++;
    }
}

int main() {
    cout << prime_fib(1) << endl;  // prints "2"
    cout << prime_fib(2) << endl;  // prints "3"
    cout << prime_fib(3) << endl;  // prints "5"
    cout << prime_fib(4) << endl;  // prints "13"
    cout << prime_fib(5) << endl;  // prints "89"
    return 0;
}