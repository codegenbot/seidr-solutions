#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for(int i=1; i<x.size(); i++) {
        if(x[i] == '/') break;
        if(x[i] == '/') continue;
        if(x[i] == ' ') continue;
        if(x[i] != '/') a = a*10 + (x[i]-'0');
    }
    for(int i=x.size()-1; i>=i-x.find('/'); i--) {
        if(x[i] == '/') break;
        c = c*10 + (x[i]-'0');
    }
    for(int i=1; i<n.size(); i++) {
        if(n[i] == '/') break;
        if(n[i] == '/') continue;
        if(n[i] == ' ') continue;
        if(n[i] != '/') b = b*10 + (n[i]-'0');
    }
    for(int i=n.size()-1; i>=i-n.find('/'); i--) {
        if(n[i] == '/') break;
        d = d*10 + (n[i]-'0');
    }
    return a*d == c*b;
}