#include <vector>
#include <cmath>

using namespace std;

double poly(vector<double> coeffs, double x);

double find_zero(vector<double> xs){
    double x = 1;
    for (int i = 2; i < xs.size(); i += 2) {
        while (poly(xs, x) > 0) {
            x -= 0.001;
        }
        while (poly(xs, x) < 0) {
            x += 0.001;
        }
    }
    return round(x, 2);
}

double poly(vector<double> coeffs, double x){
    double sum = 0;
    for(int i = 0; i < coeffs.size(); i++){
        sum += coeffs[i] * pow(x,i);
    }
    return sum;
}