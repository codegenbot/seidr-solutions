#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 1, c = 0, d = 1;
    istringstream xx(x), yy(n);
    xx >> a >> ch >> b;
    yy >> c >> ch >> d;
    return (a*d) == (b*c);
}