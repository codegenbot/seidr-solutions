#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largestFactor = 0;
    
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    
    if (n > 2) {
        largestFactor = n;
    }
    
    return largestFactor;
}

int main() {
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(2048) << endl;
    
    return 0;
}