#include <iostream>
using namespace std;

void fizz_buzz(int n) {
    for (int i = 1; i <= n; i++) {
        if ((i % 11 == 0 || i % 13 == 0))
            cout << to_string(i) << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        fizz_buzz(n);
        return 0;
    }
}