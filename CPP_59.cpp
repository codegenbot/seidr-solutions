#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int factor = 2;
    while (n > factor) {
        if (n % factor == 0) {
            n /= factor;
        } else {
            factor++;
        }
    }
    return factor;
}

int main() {
    int n;
    cin >> n;
    cout << largest_prime_factor(n) << endl;
    return 0;
}