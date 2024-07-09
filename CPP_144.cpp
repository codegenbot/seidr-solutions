#include <string>
using namespace std;

int gcdFunc(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcdFunc(b, a % b);
}

bool simplify(string x1, string x2) {
    int numerator1 = 0, denominator1 = 1;
    int i = 0;

    // Calculate the numerator of the first fraction
    while(i < x1.length()) {
        if (isdigit(x1[i])) {
            numerator1 = numerator1 * 10 + (x1[i] - '0');
        } else if (x1[i] == '/') {
            break;
        }
        i++;
    }

    // Calculate the denominator of the first fraction
    i += 1; // Skip '/'
    while(i < x1.length()) {
        if (isdigit(x1[i])) {
            denominator1 = denominator1 * 10 + (x1[i] - '0');
        } 
        i++;
    }

    int numerator2 = 0, denominator2 = 1;
    i = 0;

    // Calculate the numerator of the second fraction
    while(i < x2.length()) {
        if (isdigit(x2[i])) {
            numerator2 = numerator2 * 10 + (x2[i] - '0');
        } else if (x2[i] == '/') {
            break;
        }
        i++;
    }

    // Calculate the denominator of the second fraction
    i += 1; // Skip '/'
    while(i < x2.length()) {
        if (isdigit(x2[i])) {
            denominator2 = denominator2 * 10 + (x2[i] - '0');
        } 
        i++;
    }

    int gcd = gcdFunc(numerator1, denominator1);
    return (numerator1 / gcd) == (denominator1 / gcd);
}