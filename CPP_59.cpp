#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int max_prime = -1;
    
    while (n % 2 == 0) {
        max_prime = 2;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            max_prime = i;
            n /= i;
        }
    }
    
    if (n > 2)
        max_prime = n;
    
    return max_prime;
}

int main() {
    int n;
    cin >> n;
    cout << largest_prime_factor(n) << endl;
    return 0;
}