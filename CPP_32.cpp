```cpp
#include <vector>
#include <cmath>

double poly(std::vector<double> coefficientVector, double x) {
    double sum = 0;
    for (int i = 0; i < coefficientVector.size(); i++) {
        sum += coefficientVector[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> xValues){
    if(xValues.size() % 2 != 0) return -1; 
    double root = -xValues[1]/(2*xValues[0]); 
    return std::round(root);
}