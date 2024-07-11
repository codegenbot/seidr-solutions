#include <string>

using namespace std;

bool simplify(string x, string n) {
    int a = 1, b = 1, c = 1, d = 1;
    istringstream s(x);
    s >> a >> char('/'); 
    s >> c;
    
    istringstream t(n);
    t >> b >> char('/'); 
    t >> d;

    return (a*d) == (b*c);
}