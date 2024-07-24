#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    stringstream s(x);
    s >> a >> char('/'); s >> c;
    stringstream t(n);
    t >> b >> char('/'); t >> d;

    if (c % d != 0) return false; // check if both fractions have the same denominator
    int numerator = a * d / gcd(c, d); // calculate the numerator of the simplified fraction
    int denominator = c / gcd(c, d);   // calculate the denominator of the simplified fraction

    string result = to_string(numerator) + "/" + to_string(denominator);
    return true;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}