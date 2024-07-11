#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    int numerator = 0, denominator = 0;

    // Convert the strings to integers
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a = a * 10 + (x[i] - '0');
    }
    for (int i = x.length() - 1; i >= 0; i--) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) b = b * 10 + (x[i] - '0');
    }

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c = c * 10 + (n[i] - '0');
    }
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) d = d * 10 + (n[i] - '0');
    }

    // Calculate the gcd
    int gcd = a * d;
    while (gcd % b != 0 || gcd % c != 0) {
        for (int i = 2; i <= gcd; i++) {
            if (gcd % i == 0 && gcd / i % b == 0 && gcd / i % c == 0) {
                gcd = gcd / i;
                break;
            }
        }
    }

    // Check if the result is a whole number
    numerator = a * d / gcd;
    denominator = b * c / gcd;

    return (numerator == denominator);
}