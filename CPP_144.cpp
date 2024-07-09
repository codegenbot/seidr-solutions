```cpp
#include <string>
#include <sstream>
using namespace std;

int gcdFunc(int a, int int b) {
    if (b == 0)
        return a;
    else
        return gcdFunc(b, a % b);
}

bool simplify(istringstream xStream, istringstream nStream) {
    int numerator = 0, denominator = 0;
    char slash;

    xStream >> numerator;
    nStream >> denominator;
    while (nStream.peek() == '/') {
        nStream.ignore();
        break;
    }
    if (nStream.peek() != '\n') {
        nStream >> slash;
    }

    int gcd = gcdFunc(numerator, denominator);
    return (numerator / gcd) == (denominator / gcd);

}