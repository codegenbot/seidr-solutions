#include<iostream>
using namespace std;

int modp(int n, int p) {
    if (n < 0) {
        n = ((1 << 31) - n) % p;
    }
    long long result = 1;
    while (n > 0) {
        if (n & 1)
            result = (long long)result * p % p;
        n >>= 1;
        p = (long long)p * p % p;
    }
    return result;
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << modp(n,p) << endl;
    return 0;
}