#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largest_factor = 2;
    while (n > largest_factor) {
        if (n % largest_factor == 0) {
            n /= largest_factor;
        } else {
            largest_factor++;
        }
    }
    return largest_factor;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Largest prime factor: " << largest_prime_factor(n) << endl;
    return 0;
}