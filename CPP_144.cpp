#include<string>
using namespace std;

bool simplify(string x, string n) {
    int a = stoi(getNumerator(x));
    int b = stoi(getDenominator(x));
    int c = stoi(getNumerator(n));
    int d = stoi(getDenominator(n));

    if (a*d == b*c)
        return true;
    else
        return false;
}

string getNumerator(string s) {
    size_t pos = s.find('/');
    string temp = s.substr(0, pos);
    return temp;
}

string getDenominator(string s) {
    size_t pos = s.find('/');
    string temp = s.substr(pos+1);
    return temp;
}