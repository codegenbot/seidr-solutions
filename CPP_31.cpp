```cpp
#include <iostream>
using namespace std;

bool is_prime(long long n) {
    if (n <= 1) return false;
    if (n == 2) return true; // Handle 2 as a special case
    if (n % 2 == 0) return false; // Even numbers are not prime
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int num;
    cout << "Enter prime or composite (1/0): ";
    cin >> num;
    if (num != 0 && !is_prime(num)) {
        cout << num << " is not a prime number.\n";
    } else if (num == 1) {
        cout << "Not a valid input.\n";
    }
    return 0;
}