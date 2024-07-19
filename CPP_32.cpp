```cpp
#include <vector>
#include <cmath>

double poly(vector<double> coeffs, double solution) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(solution, i);
    }
    return result;
}

double find_zero(vector<double> coeffs, double solution) {
    double sum = 0;
    for (int i = 2; i < coeffs.size(); i += 2) {
        sum -= coeffs[i/2] * pow(solution, i) / (pow(solution, i+1));
    }
    return -sum / pow(solution, 2);
}

int main() {
    vector<double> coeffs = {1.0, -6.0, 11.0, -6.0, 1.0};
    double solution = 1.0;

    // Use the find_zero function with the declared variables
    double result = find_zero(coeffs, solution);
    cout << "The zero is: " << result << endl;
}