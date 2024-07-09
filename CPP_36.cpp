#include <iostream>
using namespace std;

int fizz_buzz(int n) {
    for (int i = 1; i <= n; i++) {
        cout << (i % 11 == 0 || i % 13 == 0 ? "FizzBuzz" : "") << " ";
    }
    cout << endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        fizz_buzz(n);
    }
}