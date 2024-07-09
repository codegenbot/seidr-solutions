#include <iostream>
using namespace std;

int prime_fib(int n) {
    int a = 0, b = 1;
    int count = 0;
    while (true) {
        string str = to_string(a + b);
        if (stoll(str) > n) break;
        a = b;
        b = a + b;
        bool isPrime = true;
        for (int j = 2; stoll(str) % j == 0 || j * j <= stoll(str); j++) {
            if (stoll(str) % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) count++;
        if (count == n) return stoi(str);
    }
    return 0;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The " << n << "th prime Fibonacci number is: " << prime_fib(n) << endl;
    return 0;
}