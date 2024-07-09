```cpp
#include <vector>
#include <cmath>

double poly(std::vector<double> coefficient, double x) {
    double sum = 0;
    for (int i = 0; i < coefficient.size(); i++) {
        sum += coefficient[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> x_coords){
    if(x_coords.size() % 2 != 0) return -1; 
    double root = -x_coords[1]/(2*x_coords[0]); 
    return std::round(root);
}