#include <iostream>
using namespace std;

int largest_divisor(int n) {
    for(int i = n / 2; i > 0; --i) {
        if (n % i == 0) {
            return i;
        }
    }
    return 1; // Should never reach here since 1 is always a divisor
}

int main() {
    int n;
    cin >> n;
    cout << largest_divisor(n) << endl;
    return 0;
}