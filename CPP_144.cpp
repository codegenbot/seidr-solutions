#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    s1 >> a >> '/' >> b;
    s2 >> c >> '/' >> d;
    
    return (a*d == b*c);
}