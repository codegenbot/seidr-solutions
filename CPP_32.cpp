#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double res = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        res += coeffs[i] * pow(x, i);
    }
    return res;
}

double find_zero(std::vector<double> xs) {
    if (xs.size() != 4) { // Assuming quartic polynomial
        return -1; // Return error code or handle exception
    }
    double a = xs[0];
    double b = xs[1];
    double c = xs[2];
    double d = xs[3];
    
    double x = (-b + sqrt(pow(b, 2) - 4 * a * (c) + 8 * a * d)) / (2 * a);
    return round(x, 2);
}

int main() {
    std::vector<double> coeffs = {1.0, -3.0, 3.0, -1.0};
    double solution = find_zero(coeffs);
    
    // Check the result
    assert(abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}