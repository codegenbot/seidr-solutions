#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}