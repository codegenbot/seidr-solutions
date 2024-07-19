#include <bits/stdc++.h>
using namespace std;

double find_zero(int n) {
    double solution;
    cin >> solution;

    vector<double> coeffs(n+1);
    for (int i = 0; i <= n; i++) {
        cin >> coeffs[i];
    }

    double sum = 0.0, temp = 0.0;
    for (int i = 0; i < n+1; i++) {
        if(i%2==0) {
            sum += coeffs[i] / pow(solution, i+1);
        }
        else {
            sum -= coeffs[i] * pow(solution, i) / (pow(solution, i+1));
        }
    }

    return -solution * sum;
}