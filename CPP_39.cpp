#include <iostream>
#include <string>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    for (int i = 2; ; i++) {
        int fib = a + b;
        if (fib > n) break;
        a = b;
        b = fib;
        bool isPrime = true;
        for (int j = 2; j * j <= fib; j++) {
            if (fib % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
        if (count == n) return i;
    }
    return -1; 
}

int mainFunction() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    if(n < 1) {
        cout << "Please enter a positive integer." << endl;
    } else {
        int result = prime_fib(n);
        if(result != -1)
            cout << to_string(n) << "th prime Fibonacci number is: " << to_string(result) << "\n";
        else
            cout << "No such number exists." << endl;
    }
    return 0;
}