```cpp
#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; 
    if (n % 2 == 0) return false; 
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;

int main() {
    int input;
    cout << "Enter a number: ";
    cin >> input;
    if(is_prime(input))
        cout << "Number is prime";
    else
        cout << "Number is not prime";

    return 0;
}