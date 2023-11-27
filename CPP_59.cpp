#include <iostream>
using namespace std;

int largest_prime_factor(int n){
    int largestFactor = 2;
    
    while (n > largestFactor) {
        if (n % largestFactor == 0) {
            n /= largestFactor;
        } else {
            largestFactor++;
        }
    }
    
    return largestFactor;
}

int main() {
    cout << largest_prime_factor(13195) << endl;
    cout << largest_prime_factor(2048) << endl;
    
    return 0;
}