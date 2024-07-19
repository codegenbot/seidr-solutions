#include <vector>
#include <cmath>

double find_zero(int n) {
    double solution;
    cin >> solution;

    std::vector<double> coeffs(n+1);  

    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    return -pow(solution, 2);
}