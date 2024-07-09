#include <iostream>
#include <string>
using namespace std;

void fizz_buzz(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if ((i % 11 == 0 || i % 13 == 0))
            count++;
    }
    cout << "The number of numbers in the range [1, " << to_string(n) << "] that are divisible by either 11 or 13 is: " << count << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n < 1) {
        cout << "Invalid input. Please enter a positive integer.\n";
    } else {
        fizz_buzz(n);
        cout << "Result for " << n << ": " << count << endl; 
    }
    return 0;
}