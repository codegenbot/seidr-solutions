#include <string>
using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    istringstream iss(x);
    iss >> a >> ch >> b;
    istringstream iss2(n);
    iss2 >> c >> ch >> d;
    if (a*d != b*c)
        return false;
    int g = __gcd(a, c);
    return (int)1.0 * a / g == (int)1.0 * c / g;
}