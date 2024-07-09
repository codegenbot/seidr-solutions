#include <iostream>
#include <string>

using namespace std;

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

bool prime_length(string str) {
    int len = str.length();
    return is_prime(len);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (prime_length(input)) {
        cout << "Length of the input string is a prime number." << endl;
    } else {
        cout << "Length of the input string is not a prime number." << endl;
    }

    return 0;
}