#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a = a * 10 + (x[i] - '0');
    }
    for (int i = x.find('/') + 1; i < x.length(); i++) {
        if (isdigit(x[i])) b = b * 10 + (x[i] - '0');
    }

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c = c * 10 + (n[i] - '0');
    }
    for (int i = n.find('/') + 1; i < n.length(); i++) {
        if (isdigit(n[i])) d = d * 10 + (n[i] - '0');
    }

    int commonDivisor = gcd(abs(a), abs(c));
    return (a / commonDivisor) * b == c / commonDivisor;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}