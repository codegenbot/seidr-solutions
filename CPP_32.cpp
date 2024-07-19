```cpp
#include <vector>
#include <cmath>
#include <algorithm>

double poly(std::vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i <= coeffs.size() - 1; i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

double find_zero(int n) {
    double solution;
    std::cin >> solution;

    // Initialize the vector coeffs with n+1 elements set to 0.0
    std::vector<double> coeffs(n+1, 0.0);

    for (int i = 0; i <= n; i++) {
        std::cin >> coeffs[i];
    }

    return -pow(solution, 2) + poly(coeffs, solution);
}