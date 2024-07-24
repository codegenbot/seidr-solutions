```cpp
#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int greatestCommonDivisor(int num1, int num2) {
    int gcd = 1;

    for(int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }

    return gcd;
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    int result = greatestCommonDivisor(a, b);
    cout << "The GCD of " << a << " and " << b << " is " << result << endl;

    return 0;
}