#include <vector>
using namespace std;

double poly(vector<double> xs, double x) {
    double result = 0;
    for (int i = 0; i < xs.size(); i++) {
        result += xs[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    if(xs.size() % 2 != 0) return -1; 
    double root = -xs[1]/(2*xs[0]); 
    return std::round(root);
}