#include <bits/stdc++.h>
#include <cmath>

double find_zero(int n) {
    double solution;
    int i;

    cin >> solution;

    std::vector<double> coeffs(n + 1, 0);

    for (i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    return -pow(solution, 2);
}