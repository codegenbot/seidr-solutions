#include<stdio.h>
#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // extract numerator and denominator from x and n
    int i = x.find('/');
    a = stoi(x.substr(0, i));
    b = stoi(x.substr(i+1));
    
    i = n.find('/');
    c = stoi(n.substr(0, i));
    d = stoi(n.substr(i+1));
    
    // calculate the gcd of ab and cd
    int g = min(b, d);
    while (g > 0 && a % g != 0 && c % g != 0) {
        g = min(g, a % g);
        if (g > 0) g = min(g, c % g);
    }
    
    // check if the product of fractions is an integer
    return (a / g) * (c / g) == (b / g) * (d / g);
}