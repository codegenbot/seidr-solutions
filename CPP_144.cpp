#include<string>
using namespace std;

bool simplify(string x, string n) {
    int num1 = 0, denom1 = 0, num2 = 0, denom2 = 0;
    
    // Find numerator and denominator of first fraction
    size_t pos = x.find('/');
    num1 = stoi(x.substr(0, pos));
    denom1 = stoi(x.substr(pos + 1));

    // Find numerator and denominator of second fraction
    pos = n.find('/');
    num2 = stoi(n.substr(0, pos));
    denom2 = stoi(n.substr(pos + 1));

    // Check if the product is a whole number
    int productNumerator = (num1 * denom2) + (num2 * denom1);
    int productDenominator = denom1 * denom2;

    return (productNumerator % productDenominator == 0);
}