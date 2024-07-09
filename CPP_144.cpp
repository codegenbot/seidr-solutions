#include <string>
using namespace std;

int gcdFunc(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcdFunc(b, a % b);
}

bool simplify(std::string x) {
    int numerator = 0, denominator = 1;
    int i = 0;
    
    // Calculate the numerator
    while(i < x.length()) {
        if (isdigit(x[i])) {
            numerator = numerator * 10 + (x[i] - '0');
        } else if (x[i] == '/') {
            break;
        }
        i++;
    }

    // Calculate the denominator
    i += 1; // Skip '/'
    while(i < x.length()) {
        if (isdigit(x[i])) {
            denominator = denominator * 10 + (x[i] - '0');
        } 
        i++;
    }

    int gcd = gcdFunc(numerator, denominator);
    return (numerator / gcd) == (denominator / gcd);
}