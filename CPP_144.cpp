#include<string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    // Convert strings to integers
    size_t pos = x.find('/');
    numerator1 = stoi(x.substr(0, pos));
    denominator1 = stoi(x.substr(pos + 1));

    pos = n.find('/');
    numerator2 = stoi(n.substr(0, pos));
    denominator2 = stoi(n.substr(pos + 1));

    // Check if the product is a whole number
    int productNumerator = numerator1 * numerator2;
    int productDenominator = denominator1 * denominator2;

    return (productNumerator == productDenominator);
}