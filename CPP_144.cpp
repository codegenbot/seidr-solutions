#include <string>
#include <vector>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(getNumerator(x));
    int b = stoi(getDenominator(x));
    int c = stoi(getNumerator(n));
    int d = stoi(getDenominator(n));

    return (a * d) == (b * c);
}

string getNumerator(string s) {
    size_t pos = s.find('/');
    return s.substr(0, pos);
}

string getDenominator(string s) {
    size_t pos = s.find('/');
    return s.substr(pos + 1);
}