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
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(2048) << endl;
    return 0;
}