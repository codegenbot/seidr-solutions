#include <vector>
#include <cmath>

double find_zero(int n) {
    double solution;
    cin >> solution;

    std::vector<double> coeffs(n+1);

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double poly = 0.0;
    for (int i = 0; i <= n; i++) {
        poly += coeffs[i] * pow(solution, i);
    }
    
    return -poly;
}