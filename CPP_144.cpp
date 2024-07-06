#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    for(int i = 0; i < x.length(); i++) {
        if(x[i] == '/') break;
        if(i > 0 && x[i-1] == '/') continue;
        if(x[i] != '0') a = a*10 + (x[i]-'0');
    }
    for(int i = 0; i < n.length(); i++) {
        if(n[i] == '/') break;
        if(i > 0 && n[i-1] == '/') continue;
        if(n[i] != '0') d = d*10 + (n[i]-'0');
    }
    for(int i = 0; x[i]; i++) {
        if(x[i] != '/') c++;
        else break;
    }
    for(int i = 0; n[i]; i++) {
        if(n[i] != '/') d++;
        else break;
    }
    int g = __gcd(a,c);
    int h = __gcd(d,g);
    return (long long)a/g == (long long)d/h;
}