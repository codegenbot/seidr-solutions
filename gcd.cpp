#include <vector>
#include <algorithm>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int greatestCommonDivisor(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int result = greatestCommonDivisor(num1, num2);
    cout << "The GCD of the given numbers is: " << result << endl;

    return 0;
}