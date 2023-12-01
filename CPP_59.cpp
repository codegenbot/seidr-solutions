#include <iostream>
using namespace std;

int largest_prime_factor(int n) {
    int largest_factor = 2;
    
    while (n > largest_factor) {
        if (n % largest_factor == 0) {
            n = n / largest_factor;
        } else {
            largest_factor++;
        }
    }
    
    return largest_factor;
}

int main() {
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(2048) << endl;
    
    return 0;
}