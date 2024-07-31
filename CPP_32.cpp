#include <initializer_list>
#include <cmath>

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
    return poly(xs, x);
}

int main() {
    std::vector<double> xs;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double val;
        cin >> val;
        xs.push_back(val);
    }
    double solution = find_zero(xs);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;
}