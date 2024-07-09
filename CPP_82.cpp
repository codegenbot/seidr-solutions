#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(string str) {
    return isPrime(str.length());
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (prime_length(input)) {
        cout << "The length of the input string is a prime number." << endl;
    } else {
        cout << "The length of the input string is not a prime number." << endl;
    }

    return 0;
}