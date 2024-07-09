#include<stdio.h>
#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    stringstream s(x);
    s >> a >> b;
    stringstream t(n);
    t >> c >> d;
    
    long long gcd = abs(a*d - b*c);
    long long lcm = (a*d)/gcd;
    
    return lcm == a*d || lcm == a*d/2;
}