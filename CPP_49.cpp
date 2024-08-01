#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 1; i <= n; ++i) {
        res = (res * (long long)p) % p;
    }
    return res;
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << modp(n, p);
    return 0;
}