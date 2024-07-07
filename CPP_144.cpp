#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    stringstream s1(x), s2(n);
    
    if (!(s1 >> a) || !(s1 >> '/' >> b)) { 
        return false; 
    }
    
    if (!(s2 >> c) || !(s2 >> '/' >> d)) { 
        return false; 
    }
    
    return (a*d == b*c);
}