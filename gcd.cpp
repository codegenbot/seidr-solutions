#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <initializer_list>

using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}