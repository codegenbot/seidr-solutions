#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> c;
    s2 >> b >> d;
    
    if(c != d)
        return false;
    else{
        int g = gcd(abs(a*d), abs(b*c));
        return (a/g) == (b/d);
    }
}

int gcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}