#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(getNumerator(x));
    int b = stoi(getDenominator(x));
    int c = stoi(getNumerator(n));
    int d = stoi(getDenominator(n));

    return (a * d == b * c);
}

string getNumerator(string s) {
    size_t pos = s.find('/');
    return s.substr(0, pos);
}

string getDenominator(string s) {
    size_t pos = s.find('/');
    return s.substr(pos + 1);
}

int main() {
    cout << simplify("1/5", "5/1") << endl;
    cout << simplify("1/6", "2/1") << endl;
    cout << simplify("7/10", "10/2") << endl;

    return 0;
}