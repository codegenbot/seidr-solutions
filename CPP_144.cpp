#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    
    // Split the fractions into numerator and denominator
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    // Simplify the fractions
    int common = gcd(abs(a)*abs(d), abs(b)*abs(c));
    
    a *= d / common;
    b *= c / common;

    // Check if the two simplified fractions are equal
    return (a == b);
}

// GCD function to simplify the fractions
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}