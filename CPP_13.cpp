#include <iostream>

using namespace std;

int greatest_common_divisor(int a, int b) {
    if (b == 0)
        return a;
    else
        return greatest_common_divisor(b, a % b);
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Greatest common divisor: " << greatest_common_divisor(a, b) << endl;
    return 0;
}