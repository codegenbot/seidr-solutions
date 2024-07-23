#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;
    long long result = gcd(a, b);
    cout << "The GCD of the entered numbers is: " << result << endl;
    return 0;
}