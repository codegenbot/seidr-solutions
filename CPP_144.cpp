#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < x.length(); i++) {
        if(x[i] == '/') break;
        if(i > 0 && x[i-1] == '/') continue;
        a = a * 10 + (x[i] - '0');
    }
    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '/') break;
        if(i > 0 && n[i-1] == '/') continue;
        d = d * 10 + (n[i] - '0');
    }
    
    int g = gcd(a, b);
    a /= g;
    b /= g;
    
    g = gcd(c, d);
    c /= g;
    d /= g;

    return a*d == b*c;
}

int gcd(int a, int b) {
    if(b == 0) return a;
    else return gcd(b, a%b);
}