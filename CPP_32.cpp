#include <vector>
#include <cmath>

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    int ncoeff = xs.size();
    std::vector<double> coeffs(ncoeff-1);
    
    for (int i = 0; i < ncoeff; ++i)
        coeffs[i] = -pow(-1, i)*xs[ncoeff-1-i]/factorial(i);

    double root;
    do {
        root = 1.0;
        double sum = 0.0;
        for (int i = 0; i < ncoeff; ++i) {
            int power = i;
            double coeff = coeffs[i];
            while(power > 0){
                sum += coeff * pow(root, power);
                power--;
                coeff /= root;
            }
        }
        if(sum < 1e-9)
            break;
        for (int i = 0; i < ncoeff; ++i) {
            int power = i;
            double coeff = coeffs[i];
            while(power > 0){
                sum += -coeff * pow(root, power);
                power--;
                coeff /= root;
            }
        }
    } while(true);
    
    return std::round(root);
}