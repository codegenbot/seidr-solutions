```cpp
#include <string>
#include <sstream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    stringstream s1(x), s2(n);
    char ch;
    s1 >> a >> ch >> b; 
    s2 >> c >> ch >> d; 

    return (a*d == b*c);
}