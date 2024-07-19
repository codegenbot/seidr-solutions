#include <iostream>
#include <vector>
#include <cmath>
#include <cassert>

using namespace std;

double poly(vector<double> xs, double x){
    double result = 0;
    for (int i=0; i<xs.size(); i++)
        result += xs[i] * pow(x, i);
    return result;
}

double find_zero(vector<double> xs){
    return -xs[1]/xs[0];  
}