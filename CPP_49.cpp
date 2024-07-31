#include <iostream>
using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (res * i) % p;
    }
    return res;
}

int main() {
    cout << modp(3, 5) << endl;
    cout << modp(1101, 101) << endl;
    cout << modp(0, 101) << endl;
    cout << modp(3, 11) << endl;
    cout << modp(100, 101) << endl;
    return 0;
}