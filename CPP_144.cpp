#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

bool simplify(string x, string n) {
    stringstream ss1(x), ss2(n);
    int num1, den1, num2, den2;
    char slash;
    ss1 >> num1 >> slash >> den1;
    ss2 >> num2 >> slash >> den2;
    
    int result_num = num1 * num2;
    int result_den = den1 * den2;
    
    double result = static_cast<double>(result_num) / result_den;
    
    return abs(result - round(result)) < 1e-9;
}

int main() {
    string x, n;
    cin >> x >> n;
    cout << (simplify(x, n) ? "true" : "false") << endl;
    return 0;
}