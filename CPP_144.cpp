#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;

bool simplify(string x, string n){
    stringstream ss1(x), ss2(n);
    int num1, den1, num2, den2;
    char slash;
    ss1 >> num1 >> slash >> den1;
    ss2 >> num2 >> slash >> den2;
    
    double result = (double)num1 / den1 * num2 / den2;
    
    return (abs(result - round(result)) < 1e-9);
}