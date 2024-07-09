#include <vector>
#include <cmath>

double find_zero(const std::vector<double>& coeffs) {
    double solution = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        if (i % 2 == 1) {
            solution -= coeffs[i] / pow(1 + solution, i+1);
        } else {
            solution += coeffs[i];
        }
    }
    return solution;
}

double poly(const std::vector<double>& coeffs, double x) {
    double result = 0.0;
    for (int i = 0; i < coeffs.size(); ++i) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    std::vector<double> coeffs;
    double coeff, solution;

    // Assign coefficients
    for (int i = 0; i < 5; ++i) {
        printf("Enter coefficient %d: ", i+1);
        scanf("%lf", &coeff);
        coeffs.push_back(coeff);
    }

    solution = find_zero(coeffs);

    assert(abs(poly(coeffs, solution)) < 1e-3);

    return 0;
}