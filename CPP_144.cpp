#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream xx(x), yy(n);
    xx >> a >> char('/'); 
    yy >> c >> char('/');
    if (a * c > b * d) swap(a, b), swap(c, d);
    return a == c && b == d;
}