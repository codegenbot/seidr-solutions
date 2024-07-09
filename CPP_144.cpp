#include <string>
#include <sstream>
using namespace std;

bool simplify(string x, string n) {
    int a, b, c, d;
    istringstream iss1(x), iss2(n);
    iss1 >> a >> '/' >> b;
    iss2 >> c >> '/' >> d;
    return (a*d == b*c);
}