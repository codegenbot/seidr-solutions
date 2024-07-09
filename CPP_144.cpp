#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int a = 0, b = 0, c = 0, d = 0;
    
    // Split numerator and denominator of x into two integers.
    size_t pos = x.find('/');
    a = stoi(x.substr(0, pos));
    b = stoi(x.substr(pos + 1));

    // Split numerator and denominator of n into two integers.
    pos = n.find('/');
    c = stoi(n.substr(0, pos));
    d = stoi(n.substr(pos + 1));

    return (a * d) == (b * c);
}

int main() {
    cout << simplify("1/5", "5/1") << endl; // true
    cout << simplify("1/6", "2/1") << endl; // false
    cout << simplify("7/10", "10/2") << endl; // false

    return 0;
}