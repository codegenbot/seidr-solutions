#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

bool simplify(string x, string n) {
    int numerator1 = stoi(split(x)[0]);
    int denominator1 = stoi(split(x)[2]);

    int numerator2 = stoi(split(n)[0]);
    int denominator2 = stoi(split(n)[2]);

    int commonDivisor = gcd(abs(numerator1 * denominator2), abs(denominator1 * numerator2));

    return (numerator1 / commonDivisor) == (denominator1 / commonDivisor);
}

string split(string s) {
    string result[3];
    size_t pos = 0, prev = 0;
    while ((pos = s.find('/', prev)) != string::npos) {
        result[0] = s.substr(prev, pos - prev);
        result[1] = s.substr(pos + 1);
        return result[0] + "/" + result[1];
    }
}