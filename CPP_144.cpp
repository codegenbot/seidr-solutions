#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int a = stoi(getNumerator(x));
    int b = stoi(getDenominator(x));
    int c = stoi(getNumerator(n));
    int d = stoi(getDenominator(n));

    if (a % c == 0 && b % d == 0) return true;
    else return false;

}

string getNumerator(string s) {
    size_t pos = s.find('/');
    string result = s.substr(0, pos);
    return result;
}

string getDenominator(string s) {
    size_t pos = s.find('/');
    string result = s.substr(pos + 1);
    return result;
}