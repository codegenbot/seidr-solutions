#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    long long num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    long long result = gcd(num1, num2);

    cout << "GCD of the entered numbers is: " << result << endl;

    return 0;
}