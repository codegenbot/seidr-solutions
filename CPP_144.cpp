#include <string>
#include <sstream>

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

    // Check if the product of the two fractions is a whole number
    int numerator3 = numerator1 * numerator2;
    int denominator3 = denominator1 * denominator2;

    return (numerator3 == denominator3);
}