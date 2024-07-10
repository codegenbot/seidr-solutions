#include <vector>
#include <cmath>

double sum_squares(const std::vector<double>& lst){
    double sum = 0;
    for (double num : lst) {
        double rounded_num = std::round(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}