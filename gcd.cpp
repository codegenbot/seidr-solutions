#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    cout << "Enter two numbers: ";
    int num1, num2;
    cin >> num1 >> num2;
    cout << "GCD is: " << gcd(num1, num2) << endl;
    return 0;
}