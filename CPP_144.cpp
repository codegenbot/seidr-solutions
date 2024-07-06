#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    int gcd = 1;
    
    // Convert fraction to integers
    sscanf(x.c_str(), "%d/%d", &a, &b);
    sscanf(n.c_str(), "%d/%d", &c, &d);

    // Calculate GCD of numerator and denominator
    for(int i = min(b,d); i > 0; --i) {
        if(b%i == 0 && d%i == 0) {
            gcd = i;
            break;
        }
    }

    // Simplify the fraction
    a *= d / gcd;
    b *= d / gcd;

    return (a/b) == (c/b);
}