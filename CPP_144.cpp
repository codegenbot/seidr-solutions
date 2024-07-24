#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    stringstream s(x);
    s >> a >> b;
    stringstream t(n);
    t >> c >> d;
    long long lcm = (long long)a*d/(gcd(b,d));
    return (lcm/a) == (lcm/d);
}

int gcd(int a,int b){
    if(a<b) swap(a,b);
    while(b!=0) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}