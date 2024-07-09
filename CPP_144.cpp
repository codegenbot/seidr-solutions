#include<string>
#include<sstream>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    istringstream xx(x);
    istringstream nn(n); 
    xx >> a >> c;
    nn >> b >> d;
    
    long long numerator = (long long)a * d;
    long long denominator = (long long)b * c;
    
    if(denominator == 0) return false;
    
    int gcd = __gcd(abs(numerator), abs(denominator)); 
    return (numerator / gcd == denominator / gcd);
}