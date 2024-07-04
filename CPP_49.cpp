#include <iostream>
using namespace std;

int modp(int n, int p) {
    if (n == 0) return 1;
    long long result = 1;
    long long base = 2;
    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % p;
        }
        base = (base * base) % p;
        n /= 2;
    }
    return result;
}

int main() {
    cout << modp(3, 5) << endl; // Output: 3
    cout << modp(1101, 101) << endl; // Output: 2
    cout << modp(0, 101) << endl; // Output: 1
    cout << modp(3, 11) << endl; // Output: 8
    cout << modp(100, 101) << endl; // Output: 1
    return 0;
}
