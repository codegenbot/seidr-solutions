#include <vector>
#include <cmath>

double sum_squares(std::vector<double> lst){
    double total = 0;
    for(double x : lst){
        double ceil_x = ceil(x);
        total += pow(ceil_x,2);
    }
    return total;