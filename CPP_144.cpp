#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    int gcd = 1;
    
    // Convert fractions to integers and check for GCD
    int pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));
    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));
    
    gcd = gcd(a, b);
    gcd = gcd(c, d) / gcd;
    
    // Check if the simplified fraction is an integer
    int numerator = (a / gcd) * (c / gcd);
    int denominator = b * d / gcd;
    
    return numerator == denominator;
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}