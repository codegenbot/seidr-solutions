#include <vector>
#include <cmath>

double find_zero(int n) {
    double solution;
    std::cin >> solution;

    // Initialize the vector coeffs with n+1 elements set to 0.0
    std::vector<double> coeffs(n+1) = {};

    for (int i = 0; i <= n; i++) {
        std::cin >> coeffs[i];
    }

    return -pow(solution, 2);
}