```cpp
#include <initializer_list>
#include <cmath>

double poly(std::vector<double> coefficients, double x);
double find_zero(std::vector<double> coeffs);

int main() {
    std::vector<double> coeffs = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double val;
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

double find_zero(std::vector<double> coeffs) {
    std::vector<double> values;
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            values.push_back(coeffs[i] / coeffs[0]);
        }
    }
    double x = -values[0];
    return poly(values, x);
}