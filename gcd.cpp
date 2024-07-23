#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return abs(a);
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return 0;
}