#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x){
    double result = 0;
    for(int i=0; i<coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

void assert(bool condition){
    if (!condition) {
        cout << "Assertion failed!" << endl;
        exit(1);
    }
}

double find_zero(vector<double> xs){
    assert(xs.size() == 2);
    double a = xs[0], b = xs[1];
    return -b/a;
}