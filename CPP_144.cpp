#include <string>
#include <sstream>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    stringstream xx(x), yy(n);
    
    xx >> a >> b;
    yy >> c >> d;
    
    return (a*d == c*b);
}