#include <iostream>
using namespace std;

cout << "Enter two integers separated by a space: ";
int a, b;
cin >> a >> b;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int result = gcd(a, b);
cout << "GCD: " << result << endl;