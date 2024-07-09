```cpp
#include <vector>
#include <cmath>

double poly(std::vector<double> coeffVector, double x) {
    double sum = 0;
    for (int i = 0; i < coeffVector.size(); i++) {
        sum += coeffVector[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> xs){
    if(xs.size() % 2 != 0) return -1; 
    double root = -(xs[1]/(2*xs[0])); 
    return std::round(root);
}