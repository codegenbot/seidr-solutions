#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The first prime Fibonacci number greater than " << num << " is " << (num > 1 ? prime_fib(2) : -1) << std::endl;
    return 0;
}