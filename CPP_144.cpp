#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> '/' >> b;
    s2 >> c >> '/' >> d;
    
    long long numerator = (long long)a * d;
    long long denominator = (long long)b * d;

    if(denominator == 0) return false; // check for zero denominator

    int gcd = __gcd(abs(numerator), abs(denominator));
    numerator /= gcd;
    denominator /= gcd;

    return numerator == denominator;
}

int main() {
    cout << simplify("1/5", "5/1") << endl;
    cout << simplify("1/6", "2/1") << endl;
    cout << simplify("7/10", "10/2") << endl;
    return 0;
}