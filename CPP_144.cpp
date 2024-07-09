Here is the solution:

```cpp
#include <string>
using namespace std;

bool simplify(string x, string n) {
    int numerator1 = stoi(split(x, '/')[0]);
    int denominator1 = stoi(split(x, '/')[1]);

    int numerator2 = stoi(split(n, '/')[0]);
    int denominator2 = stoi(split(n, '/')[1]);

    long gcd = calculateGCD(denominator1 * denominator2);

    return (long)numerator1 * denominator2 / gcd == (long)denominator1 * numerator2 / gcd;
}

string split(string s, char c) {
    size_t pos = 0;
    string token;

    while ((pos = s.find(c)) != string::npos) {
        token = s.substr(0, pos);
        s.erase(0, pos + 1);
    }

    return token;
}

long calculateGCD(long a, long b) {
    if (b == 0)
        return a;
    else
        return calculateGCD(b, a % b);
}