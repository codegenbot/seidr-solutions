#include <string>
#include <vector>

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) a = a * 10 + (x[i] - '0');
    }
    for (int i = x.length() - 1; i >= 0; i--) {
        if (x[i] == '/') break;
        if (isdigit(x[i])) b = b * 10 + (x[i] - '0');
    }

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) c = c * 10 + (n[i] - '0');
    }
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '/') break;
        if (isdigit(n[i])) d = d * 10 + (n[i] - '0');
    }

    return a*d==b*c;
}