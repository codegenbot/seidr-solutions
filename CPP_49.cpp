#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (p == 1)
        return 0;
    long long res = 1;
    while (n > 0) {
        if (n % 2)
            res = (long long)res * p % p;
        p = (long long)p * p % p;
        n /= 2;
    }
    return res;
}

int main() {
    int n, p;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of p: ";
    cin >> p;
    cout << "The result is: " << modp(n, p) << endl;
    return 0;
}