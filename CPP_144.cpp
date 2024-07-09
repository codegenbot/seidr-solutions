#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> char('/') >> b;
    s2 >> c >> char('/') >> d;
    
    int g = abs(__gcd(a*d, b*c));
    return (a*d)/g == c*g && b*c == g;
}

int __gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return __gcd(b, a%b);
}