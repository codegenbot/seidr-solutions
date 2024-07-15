#include <iostream>

using namespace std;

int largest_prime_factor(int n) {
    int max = 1;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            if (i > max)
                max = i;
        }
    }
    return max;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The largest prime factor is: " << largest_prime_factor(n) << endl;
    return 0;
}