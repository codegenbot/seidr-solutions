```
#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    if (is_prime(num1)) {
        cout << num1 << " is a prime number.\n";
    } else {
        cout << num1 << " is not a prime number.\n";
    }
    
    if (is_prime(num2)) {
        cout << num2 << " is a prime number.\n";
    } else {
        cout << num2 << " is not a prime number.\n";
    }
    return 0;
}