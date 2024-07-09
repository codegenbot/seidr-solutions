#include <iostream>
#include <sstream>
#include <cctype>

bool simplify(string x, string n) {
    int numerator = 0, denominator = 1;
    int gcd = 1;

    // Convert the input strings to integers
    stringstream s(x);
    s >> numerator;

    s.str(n);
    s >> denominator;

    // Calculate the greatest common divisor (GCD)
    for(int i = min(abs(numerator), abs(denominator)); i > 0; --i) {
        if(numerator % i == 0 && denominator % i == 0) {
            gcd = i;
            break;
        }
    }

    // Simplify the fraction
    numerator /= gcd;
    denominator /= gcd;

    // Check if the simplified fraction is equal to the original one
    return (numerator == numerator / denominator * denominator);
}

int main() {
    string x, n;
    cout << "Enter the numerator: ";
    cin >> x;
    cout << "Enter the denominator: ";
    cin >> n;

    if(simplify(x, n))
        cout << "The fraction is simplified." << endl;
    else
        cout << "The fraction cannot be simplified." << endl;

    return 0;
}