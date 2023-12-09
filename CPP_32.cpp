#include <vector>

float find_zero(const std::vector<double>& coeffs) {
    float x = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        x += coeffs[i] * pow(x, i);
    }
    return x;
}

float poly(const std::vector<double>& coeffs) {
    float y = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        y += coeffs[i] * pow(y, i);
    }
    return y;
}

int main() {
    std::vector<double> coeffs = {1.0, -2.0, 1.0};
    float solution = find_zero(coeffs);
    printf("The solution is: %f\n", solution);
    return 0;
}