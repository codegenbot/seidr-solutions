#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(x.substr(0, x.find('/'))), b = stoi(x.substr(x.find('/') + 1));
    int c = stoi(n.substr(0, n.find('/'))), d = stoi(n.substr(n.find('/') + 1));

    long gcd = abs(a * d - b * c);
    a /= gcd;
    b /= gcd;
    c /= gcd;
    d /= gcd;

    if (a % c == 0 && b % d == 0) {
        return true;
    } else {
        return false;
    }
}