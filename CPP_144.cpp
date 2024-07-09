#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    string temp1, temp2;
    // Convert the fractions to integers.
    for(int i=1; i<x.size(); i++) {
        if(x[i]=='/') break;
        if(x[i-1]!='/') a = a*10 + (x[i]-'0');
    }
    for(int i=x.size()-1; i>0; i--) {
        if(x[i-1]!='/') b = b*10 + (x[i]-'0');
    }
    for(int i=1; i<n.size(); i++) {
        if(n[i]=='/') break;
        if(n[i-1]!='/') c = c*10 + (n[i]-'0');
    }
    for(int i=n.size()-1; i>0; i--) {
        if(n[i-1]!='/') d = d*10 + (n[i]-'0');
    }
    // Calculate the greatest common divisor of a, b, c and d.
    int g = __gcd(__gcd(a, b), __gcd(c, d));
    return (a/g) == (c/g);
}