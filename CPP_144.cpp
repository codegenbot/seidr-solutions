#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    // Split the fractions into numerators and denominators
    size_t pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find('/');
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    // Calculate the greatest common divisor of both denominators
    int gcd = denominator1;
    while (gcd > 0 && denominator2 % gcd != 0) {
        gcd = gcd % denominator2;
    }

    // Simplify the fractions by dividing both numerators and denominators by their GCD
    numerator1 /= gcd;
    denominator1 /= gcd;
    numerator2 /= gcd;
    denominator2 /= gcd;

    return (numerator1 * denominator2 == numerator2 * denominator1);
}