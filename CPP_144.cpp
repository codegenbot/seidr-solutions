#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    int numerator = 0, denominator = 0;

    // Convert the fractions to integers
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Calculate the greatest common divisor
    int gcd = abs(a * d - b * c);
    for (int i = gcd; i > 0; --i) {
        if (a % i == 0 && b % i == 0 && c % i == 0 && d % i == 0)
            gcd = i;
    }

    // Check if the result is a whole number
    int numeratorResult = a / gcd * d / gcd;
    int denominatorResult = b / gcd * d / gcd;

    return (numeratorResult == denominatorResult);
}