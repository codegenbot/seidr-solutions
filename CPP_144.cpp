#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

bool simplify(string x, string n){
    stringstream sx(x), sn(n);
    int num1, den1, num2, den2;
    char slash;

    sx >> num1 >> slash >> den1;
    sn >> num2 >> slash >> den2;

    return (num1 * num2) % (den1 * den2) == 0;
}

int main() {
    string x, n;
    cin >> x >> n;
    cout << (simplify(x, n) ? "true" : "false") << endl;
    return 0;
}