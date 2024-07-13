#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> '/' >> b;
    s2 >> c >> '/' >> d;
    
    int gcd = min(a, b);
    while (gcd > 0 && a % gcd == 0 && b % gcd == 0) {
        a /= gcd;
        b /= gcd;
        gcd = min(c, d);
        while (gcd > 0 && c % gcd == 0 && d % gcd == 0) {
            c /= gcd;
            d /= gcd;
            gcd = std::min(a*d, b*c);
        }
    }

    return a * d == c * b;
}