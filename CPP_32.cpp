#include <cmath>
using namespace std;

double find_zero(vector<double> xs) {
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        sum += xs[i] / static_cast<double>(i);
    }
    return -sum;
}