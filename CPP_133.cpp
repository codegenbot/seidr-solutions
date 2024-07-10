#include <vector>
#include <cmath>

double sum_squares(std::vector<double> lst){
    double sum = 0;
    for (double num : lst) {
        sum += std::round(num) * std::round(num);
    }
    return sum;
}