#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    int gcd = 1;
    
    // Convert the fractions to integers
    sscanf(x.substr(1).c_str(), "%d/%d", &a, &b);
    sscanf(n.substr(1).c_str(), "%d/%d", &c, &d);

    // Calculate the greatest common divisor of the numerators and denominators
    for (int i = min(b, d); i > 0; --i) {
        if ((a / i) * i == a && (c / i) * i == c) {
            gcd = i;
            break;
        }
    }

    // Check if the simplified fractions are equal
    int numerator1 = a / gcd;
    int denominator1 = b / gcd;
    int numerator2 = c / gcd;
    int denominator2 = d / gcd;

    return (numerator1 * denominator2) == (numerator2 * denominator1);
}