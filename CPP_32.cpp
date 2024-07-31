#include <initializer_list>
#include <cmath>

double poly(std::vector<double> coefficients, double x);
double find_zero(std::vector<double> coefficients);

int main() {
    int n;
    cin >> n;
    std::vector<double> coeffs = {}; 
    double val;
    for (int i = 0; i < n; i++) {
        cin >> val;
        coeffs.push_back(val);
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;
}

double poly(std::vector<double> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> coefficients) {
    std::vector<double> values;
    double sum = 0;
    for (int i = 1; i < coefficients.size(); i++) {
        if (i % 2 == 0) {
            values.push_back(coefficients[i] / coefficients[0]);
        }
    }
    double x = -values[0];
    return poly(coeffs, x);
}