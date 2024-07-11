#include <iostream>
#include <cmath>

using namespace std;

int largest_prime_factor(int n){
    int maxPrime = 2;
    
    while (n % 2 == 0) {
        n /= 2;
    }

    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }

    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}

int main() {
    int number;
    cin >> number;
    cout << largest_prime_factor(number) << endl;
    return 0;
}