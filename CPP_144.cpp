#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < x.length(); i++) {
        if(x[i] == '/') break;
        if(x[i] != ' ') a = a * 10 + (x[i] - '0');
    }
    for(int i = 0; i < x.length() - 1; i++) {
        if(x[i] == '/') break;
        c = c * 10 + (x[i+1] - '0');
    }

    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '/') break;
        if(n[i] != ' ') b = b * 10 + (n[i] - '0');
    }
    for(int i = 0; i < n.length() - 1; i++) {
        if(n[i] == '/') break;
        d = d * 10 + (n[i+1] - '0');
    }

    return a*d == c*b;
}