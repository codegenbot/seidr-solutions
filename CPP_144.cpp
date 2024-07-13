#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> '/' >> b;
    s2 >> c >> '/' >> d;
    
    long long lcm = (long long)a * d;
    long long commonDivisor = gcd(lcm, b);
    lcm /= commonDivisor;
    commonDivisor = gcd(lcm, d);
    lcm /= commonDivisor;

    return a * c / commonDivisor == b * d / commonDivisor;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}