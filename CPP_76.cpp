#include <bits/stdc++.h>
using namespace std;

bool is_simple_power(int x, int n) {
    double y = pow(n, 1.0);
    return (int)y == x;
}

int main() {
    int x, n;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Enter a power: ";
    cin >> n;
    if(is_simple_power(x,n))
        cout << x << " is a simple power of " << n << endl;
    else
        cout << x << " is not a simple power of " << n << endl;
    return 0;
}