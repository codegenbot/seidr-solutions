```c++
#include <iostream>
#include <cassert>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

string prime_fib(int num) {
    int a = 0, b = 1, fibNum = 0;
    while (true) {
        fibNum = a + b;
        a = b;
        b = fibNum;
        if (isPrime(fibNum)) {
            if (fibNum > num) return to_string(fibNum);
        }
    }
}

void solveProblem() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The first prime Fibonacci number greater than " << num << " is " << prime_fib(num) << endl;
    assert(prime_fib(10) == "433494437");
}