#include <iostream>
#include <sstream>
#include <cctype>

bool simplify(int x, int y) {
    if (y == 0)
        return false;
    int gcd = __gcd(x, y);
    return (x / gcd == y / gcd);
}

int mainFunction() {
    int numerator, denominator;
    cout << "Enter the numerator: ";
    cin >> numerator;
    char slash;
    cin >> slash;
    if(slash != '/')
        return 1; // invalid input
    cin.ignore();
    cout << "Enter the denominator: ";
    cin >> denominator;

    if(simplify(numerator, denominator))
        cout << "The fraction is simplified." << std::endl;
    else
        cout << "The fraction cannot be simplified." << std::endl;

    return 0;
}

int __gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}