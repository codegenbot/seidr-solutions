#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0, numerator2 = 0, denominator2 = 0;
    int gcd = 1;

    // Convert strings to integers
    size_t pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find('/');
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    // Calculate GCD
    for (int i = 1; i <= min(denominator1, denominator2); i++) {
        if (denominator1 % i == 0 && denominator2 % i == 0) {
            gcd = i;
        }
    }

    int newNumerator = numerator1 * (denominator2 / gcd) + numerator2 * (denominator1 / gcd);
    int newDenominator = denominator1 * denominator2 / gcd;

    if (newNumerator % newDenominator == 0) {
        return true;
    } else {
        return false;
    }
}