#include <vector>
#include <cmath>

double sum_squares(std::vector<double> lst){
    double sum = 0;
    for (double num : lst) {
        sum += num * num;
    }
    return sum;
}