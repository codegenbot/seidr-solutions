#include <cmath>
#include <vector>

double find_zero(std::vector<double> coeffs) {
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i++) {
        if (i % 2 == 0) {
            sum += coeffs[i] / coeffs[0];
        }
    }
    return -sum / coeffs[0];
}

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        if(i % 2 == 1) {
            result += coeffs[i] * pow(x, (coeffs.size() - 1 - i) / 2.0);
        }
    }
    return result;
}

int main() {
    std::vector<double> coeffs;
    int n;
    cin >> n;
    coeffs.resize(n+1);
    for(int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double solution = find_zero(coeffs);

    double x;
    cout << "Enter a value of x: ";
    cin >> x;

    double result = poly(coeffs, x);
    cout << "The value of the polynomial at x is: " << result << endl;

    return 0;
}