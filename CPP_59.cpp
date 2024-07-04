#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largest = 1;
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    if (n > 2) {
        largest = n;
    }
    return largest;
}

int main() {
    int n;
    cin >> n;
    cout << largest_prime_factor(n) << endl;
    return 0;
}