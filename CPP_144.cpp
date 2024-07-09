```cpp
#include <string>
using namespace std;

int gcdFunc(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcdFunc(b, a % b);
}

bool simplify(std::string x, std::string n) {
    int numerator = 0, denominator = 0;
    char slash;

    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '/') {
            slash = x[i];
            break;
        }
        if (isdigit(x[i])) {
            if (i == 0) numerator = numerator * 10 + (x[i] - '0');
            else denominator = denominator * 10 + (x[i] - '0');
        }
    }

    int gcd = gcdFunc(numerator, denominator);
    return (numerator / gcd) == (denominator / gcd);

}