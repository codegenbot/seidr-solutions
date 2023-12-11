#include <iostream>
using namespace std;

int fibfib(int n) {
    int a = 0;
    int b = 1;
    for (int i = 2; i <= n; ++i) {
        int c = a + b;
        a = b;
        b = c;
    }
    return a;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The " << n << "-th Fibonacci number is: " << fibfib(n) << endl;
    return 0;
}