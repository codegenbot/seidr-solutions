#include <iostream>
#include <string>

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;

int main() {
    string input;
    cout << "Enter a number: ";
    getline(cin, input);
    cout << "Number is " << (is_prime(stoi(input)) ? "prime" : "not prime");
    return 0;