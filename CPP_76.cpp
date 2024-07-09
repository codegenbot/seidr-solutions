#include<iostream>
using namespace std;

bool is_simple_power(int x, int n) {
    double y = pow(n, log(x) / log(n));
    return (y == int(y));
}

int main() {
    int x, n;
    cout << "Enter value of x: ";
    cin >> x;
    cout << "Enter value of n: ";
    cin >> n;
    
    if(is_simple_power(x, n))
        cout << x << " is a simple power of " << n << endl;
    else
        cout << x << " is not a simple power of " << n << endl;

    return 0;
}