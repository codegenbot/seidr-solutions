#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    char slash;
    s1 >> a >> slash; 
    s1 >> b; 
    s2 >> c >> slash; 
    s2 >> d; 

    return (a*d == b*c);
}