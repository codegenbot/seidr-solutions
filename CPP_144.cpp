#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    int numeratorX = 0, denominatorX = 0;
    int numeratorN = 0, denominatorN = 0;

    // Extract the numerator and denominator from the input strings
    for (int i = 0; i < x.size(); ++i) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a *= 10, numeratorX = numeratorX * 10 + (x[i] - '0');
    }
    for (int i = x.size() - 1; i > 0; --i) {
        denominatorX = denominatorX * 10 + (x[i] - '0');
    }

    for (int i = 0; i < n.size(); ++i) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c *= 10, numeratorN = numeratorN * 10 + (n[i] - '0');
    }
    for (int i = n.size() - 1; i > 0; --i) {
        denominatorN = denominatorN * 10 + (n[i] - '0');
    }

    // Calculate the greatest common divisor of the numerators and denominators
    int gcd = numeratorX;
    while (gcd > 0 && (gcd % a || gcd % c)) {
        if (gcd % a) gcd /= a;
        else gcd /= c;
    }
    gcd = denominatorX;
    while (gcd > 0 && (gcd % b || gcd % d)) {
        if (gcd % b) gcd /= b;
        else gcd /= d;
    }

    // Check if the simplified fraction is an integer
    int numerator = numeratorX / a, denominator = denominatorX / c;
    return numerator * denominator == 1;
}