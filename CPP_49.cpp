#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    else if (n % 2 == 0) {
        long long temp = modp(n / 2, p);
        return ((temp * temp) % p);
    } else
        return ((n * n) % p);
}

int main() {
    int n, p;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of p: ";
    cin >> p;
    cout << "2^" << n << " mod " << p << " = " << modp(n, p) << endl;
    return 0;
}