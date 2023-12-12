#include <iostream>
using namespace std;

int fib4(int n) {
    // Implement the Fibonacci sequence here
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    string str = "The " + to_string(n) + "-th Fibonacci number is: " + to_string(fib4(n));
    cout << str << endl;
    return 0;
}