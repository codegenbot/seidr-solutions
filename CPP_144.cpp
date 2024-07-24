#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

bool simplify(string x, string n) {
    stringstream ss1(x), ss2(n);
    int num1, denom1, num2, denom2;
    char slash;

    ss1 >> num1 >> slash >> denom1;
    ss2 >> num2 >> slash >> denom2;

    if ((num1 * num2) % (denom1 * denom2) == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string x, n;
    cin >> x >> n;
    cout << (simplify(x, n) ? "true" : "false") << endl;
    return 0;
}