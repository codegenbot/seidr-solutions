#include <iostream>

using namespace std;

int modp(int n, int p) {
    if (n == 0)
        return 1;
    long long res = 1;
    for (int i = 1; i <= n; i++) {
        res = (res * 2) % p;
    }
    return res;
}

int main() {
    int n, p;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of p: ";
    cin >> p;
    cout << "Modular Power is: " << modp(n, p) << endl;
    return 0;
}