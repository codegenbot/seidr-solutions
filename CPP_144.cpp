#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    
    // Remove '/' from the strings
    char temp;
    while(s2 >> temp) {
        if(temp == '/')
            break;
        c *= 10;
        c += temp - '0';
    }
    
    // Remove '/' from the strings
    while(s1 >> temp) {
        if(temp == '/')
            break;
        d *= 10;
        d += temp - '0';
    }
    
    return (a*d == b*c);
}