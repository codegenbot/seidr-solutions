#include <string>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Convert numerator and denominator of both fractions into integers
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Calculate the greatest common divisor (GCD) of both denominators
    int gcd = __gcd(b, d);

    // Simplify both fractions
    a *= d / gcd;
    b *= d / gcd;
    c *= b / gcd;
    d /= gcd;

    return a == c;
}