#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    int i = 0;
    
    while(i < x.size()) {
        if(x[i] == '/') break;
        else if(x[i] == '0') continue;
        else if(x[i] != ' ') a = a * 10 + (x[i] - '0');
        i++;
    }
    i = 0;
    
    while(i < n.size()) {
        if(n[i] == '/') break;
        else if(n[i] == '0') continue;
        else if(n[i] != ' ') d = d * 10 + (n[i] - '0');
        i++;
    }
    
    int common = __gcd(a, d);
    
    a /= common;
    d /= common;
    
    i = 0;
    
    while(i < x.size()) {
        if(x[i] == '/') break;
        else if(x[i] != ' ') b = b * 10 + (x[i+1] - '0');
        i++;
    }
    
    i = 0;
    
    while(i < n.size()) {
        if(n[i] == '/') break;
        else if(n[i] != ' ') c = c * 10 + (n[i+1] - '0');
        i++;
    }
    
    common = __gcd(b, c);
    
    b /= common;
    c /= common;
    
    return a*d == b*c;
}