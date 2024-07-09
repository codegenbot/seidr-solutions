#include <string>
#include <vector>

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

    // Calculate the greatest common divisor of the two denominators
    int gcd = denominator1;
    while (gcd != 0) {
        int temp = gcd;
        gcd = denominator2 % gcd;
        denominator2 = temp;
    }

    // Simplify both fractions by dividing their numerators and denominators by the GCD
    numerator1 /= gcd;
    denominator1 /= gcd;

    numerator2 /= gcd;
    denominator2 /= gcd;

    // Check if the two simplified fractions are equal
    return (numerator1 * denominator2 == numerator2 * denominator1);
}