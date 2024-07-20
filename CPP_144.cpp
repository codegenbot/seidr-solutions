#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1;
    int c = 0, d = 1;
    
    // convert strings to integers
    int i = 0;
    while (x[i] != '/') {
        a = a * 10 + (x[i] - '0');
        i++;
    }
    i++;
    while (i < x.size()) {
        b = b * 10 + (x[i] - '0');
        i++;
    }
    
    i = 0;
    while (n[i] != '/') {
        c = c * 10 + (n[i] - '0');
        i++;
    }
    i++;
    while (i < n.size()) {
        d = d * 10 + (n[i] - '0');
        i++;
    }
    
    // find the greatest common divisor
    int gcd = a;
    while (d != 0) {
        int temp = d;
        d = gcd % d;
        gcd = temp;
    }
    
    // simplify the fractions
    a /= gcd;
    b /= gcd;
    c /= gcd;
    d /= gcd;
    
    // check if x * n is an integer
    return (a * c) % (b * d) == 0;
}