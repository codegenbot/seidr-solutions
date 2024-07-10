#include<string>
using namespace std;

bool simplify(string x, string n) {
    int num1 = 0, denom1 = 0, num2 = 0, denom2 = 0;
    
    size_t pos1 = x.find('/');
    size_t pos2 = n.find('/');

    // Extract the numerator and denominator of both fractions
    num1 = stoi(x.substr(0, pos1));
    denom1 = stoi(x.substr(pos1 + 1));

    num2 = stoi(n.substr(0, pos2));
    denom2 = stoi(n.substr(pos2 + 1));

    // Calculate the product of both fractions
    int numerator = num1 * num2;
    int denominator = denom1 * denom2;

    // Check if the result is a whole number
    return (numerator == denominator);
}