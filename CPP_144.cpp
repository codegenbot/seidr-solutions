#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') {
            a = stoi(x.substr(0, i));
            b = stoi(x.substr(i + 1));
            break;
        }
    }
    
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '/') {
            c = stoi(n.substr(0, i));
            d = stoi(n.substr(i + 1));
            break;
        }
    }
    
    int g = __gcd(a * d, b * c);
    
    return a * d / g == c * b / g;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}