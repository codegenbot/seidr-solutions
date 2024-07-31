```cpp
#include <iostream>
#include <vector>
using namespace std;

double find_zero(vector<double> coeffs);
double poly(vector<double> coeffs, double x);

int main() {
    int n;
    cin >> n;
    vector<double> coeffs;  
    for (int i = 0; i < n; i++) {
        double vals;
        cin >> vals;
        coeffs.push_back(vals); 
    }
    double solution = find_zero(coeffs); 
    assert(abs(poly(coeffs, solution)) < 1e-3);
    cout << fixed << setprecision(2) << solution << endl;
    return 0;

}

double poly(vector<double> coeffs, double x) {
    double sum = 0.0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs) {
    double solution = 1.0;
    double tolerance = 1e-6;
    double max_iter = 100;

    for (int i = 0; i < max_iter; i++) {
        double new_solution = 0.0;
        for (int j = 0; j < coeffs.size(); j++) {
            new_solution += coeffs[j] * pow(solution, j);
        }
        if (abs(new_solution) < tolerance)
            return solution;
        solution = new_solution;
    }

    return -1.0;
}