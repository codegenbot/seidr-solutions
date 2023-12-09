#include <iostream>
#include <vector>
using namespace std;

double find_zero(const vector<double>& coeffs) {
    // Implement the function to calculate the roots of the polynomial equation
}

int main() {
    vector<double> coeffs = {1.0, -2.0, 1.0};
    double solution = find_zero(coeffs);
    if (abs(poly(solution)) < 1e-3) {
        cout << "The solution is: " << solution << endl;
    } else {
        throw runtime_error("No solution found");
    }
    return 0;
}