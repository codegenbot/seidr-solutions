#include <iostream>
#include <sstream>

using namespace std;

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n, count = 1;
    cin >> n;
    cout << "Enter a number: ";
    cin >> n;
    if (!is_prime(n)) {
        cout << "The number is not prime." << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) {
                count++;
            }
        }
        cout << "Number of primes less than or equal to " << n << ": " << count << endl;
    }
    return 0;
}