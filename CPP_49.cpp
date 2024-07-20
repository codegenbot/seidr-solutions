#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (long long i = 2; i <= n; ++i) {
        res = (res * i) % p;
    }
    return res;
}

int main() {
    int n, p;
    cin >> n >> p;
    cout << modp(n,p) << endl;
    return 0;
}