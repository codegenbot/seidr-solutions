#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < x.length(); i++){
        if(x[i] == '/') break;
        if(i > 0) a = a * 10 + (x[i] - '0');
    }
    for(int i = x.length() - 1; i > x.find('/'); i--){
        a = a * 10 + (x[i] - '0');
    }

    for(int i = 0; i < n.length(); i++){
        if(n[i] == '/') break;
        if(i > 0) b = b * 10 + (n[i] - '0');
    }
    for(int i = n.length() - 1; i > n.find('/'); i--){
        b = b * 10 + (n[i] - '0');
    }

    c = a / gcd(a, b);
    d = b / gcd(b, a);

    return c == a && d == b;
}

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}