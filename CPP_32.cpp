#include <vector>
#include <random>
using namespace std;

double poly(vector<double> coeffs, double solution) {
    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(solution, power);
        power++;
    }
    return poly_value;
}

double find_zero(int n) {
    double solution;
    cin >> solution;

    // Initialize the vector coeffs with n+1 elements set to 0.0
    vector<double> coeffs(n+1, 0.0);

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double poly_value = 0;
    double power = 1;
    for (double coeff : coeffs) {
        poly_value += coeff * pow(solution, power);
        power++;
    }
    return -pow(solution, 2) + poly_value;
}