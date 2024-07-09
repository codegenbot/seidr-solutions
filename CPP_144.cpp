#include <string>
#include <iostream>

using namespace std;

bool simplify(string x, string n) {
    int numerator1 = 0, denominator1 = 0;
    int numerator2 = 0, denominator2 = 0;

    size_t found = x.find('/');
    numerator1 = stoi(x.substr(0, found));
    denominator1 = stoi(x.substr(found + 1));

    found = n.find('/');
    numerator2 = stoi(n.substr(0, found));
    denominator2 = stoi(n.substr(found + 1));

    return (numerator1 * denominator2) == (numerator2 * denominator1);
}

int main() {
    cout << simplify("1/5", "5/1") << endl;
    cout << simplify("1/6", "2/1") << endl;
    cout << simplify("7/10", "10/2") << endl;

    return 0;
}