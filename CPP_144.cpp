#include <iostream>
using namespace std;

bool simplify(string numerator1, string denominator1, string numerator2, string denominator2) {
    long productDenominator = stol(denominator1) * stol(denominator2);
    if (productDenominator == 0)
        return false; 
    return stol(numerator1) % productDenominator == 0;
}

int main() {
    string numerator1, denominator1, numerator2, denominator2;
    cout << "Enter the first fraction's numerator and denominator: ";
    cin >> numerator1 >> denominator1;
    cout << "Enter the second fraction's numerator and denominator: ";
    cin >> numerator2 >> denominator2;
    assert(simplify(numerator1, denominator1, numerator2, denominator2) == false);
    return 0;
}