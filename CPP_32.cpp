#include <initializer_list>
#include <cmath>

double poly(std::vector<double> coefficients, double x) {
    double result = 0;
    for (int i = 0; i < coefficients.size(); i++) {
        result += coefficients[i] * pow(x, i);
    }
    return result;
}

double find_zero(std::vector<double> xs) {
    std::vector<double> polyCoeffs;
    double sum = 0;
    for (int i = 1; i < xs.size(); i++) {
        if (i % 2 == 0) {
            polyCoeffs.push_back(xs[i] / xs[0]);
        }
    }
    double x = -polyCoeffs[0];
    return poly(polyCoeffs, x);
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
    double x = find_zero(xs);
    cout << fixed << setprecision(2) << x << endl;
    return 0;
}