#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largestFactor = 2;

    while (n > largestFactor) {
        if (n % largestFactor == 0) {
            n /= largestFactor;
        } else {
            largestFactor++;
        }
    }

    return largestFactor;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Largest prime factor of " << n << " is " << largest_prime_factor(n) << endl;

    return 0;
}