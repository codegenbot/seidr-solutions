#include <iostream>
using namespace std;

int fib4(int n) {
    if (n <= 1) return n;
    return fib4(n-1) + fib4(n-2);
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    string str = "The " + to_string(n) + "-th Fibonacci number is: " + to_string(fib4(n));
    cout << str << endl;
    return 0;
}