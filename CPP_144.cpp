#include<string>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int numerator1 = stoi(strtok(x.substr(1).c_str(), "/"));
    int denominator1 = stoi(x.substr(0, 1));
    int numerator2 = stoi(strtok(n.substr(1).c_str(), "/"));
    int denominator2 = stoi(n.substr(0, 1));

    int newNumerator = numerator1 * denominator2;
    int newDenominator = denominator1 * numerator2;

    return gcd(newNumerator, newDenominator) == 1;
}