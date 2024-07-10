#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    string s1, s2;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a = a * 10 + (x[i] - '0');
    }
    for (int i = x.length() - 1; i >= 0; i--) {
        if (x[i] == '/') break;
        s1 += x[i];
    }
    reverse(s1.begin(), s1.end());

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c = c * 10 + (n[i] - '0');
    }
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '/') break;
        s2 += n[i];
    }
    reverse(s2.begin(), s2.end());

    int g = __gcd(a, c);
    return a / g == b && c / g == d;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}