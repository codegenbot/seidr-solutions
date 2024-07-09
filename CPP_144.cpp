#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // converting fraction strings to integers
    sscanf(x.c_str(), "%d/%d", &a, &b);
    sscanf(n.c_str(), "%d/%d", &c, &d);

    // calculating greatest common divisor of both numerators and denominators
    int numeratorGCD = __gcd(a * d, b * c);
    int denominatorGCD = __gcd(b, d);

    // check if the fraction is simplified or not
    return a * d / numeratorGCD != b * c / denominatorGCD;
}