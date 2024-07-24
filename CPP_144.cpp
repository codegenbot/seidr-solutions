#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Convert numerator and denominator of both fractions to integers
    sscanf(x.c_str(), "%d/%d", &a, &b);
    sscanf(n.c_str(), "%d/%d", &c, &d);

    // Calculate the greatest common divisor (GCD) for both fractions
    int GCD = gcd(b, d);

    // Simplify the fractions by dividing numerator and denominator by their GCD
    a /= GCD;
    b /= GCD;
    c /= GCD;
    d /= GCD;

    // Check if the simplified fractions are equal
    return (a == c) && (b == d);
}

// Function to calculate the greatest common divisor (GCD)
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}