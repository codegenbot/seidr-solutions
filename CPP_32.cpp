#include <vector>
#include <cmath>
using namespace std;

double poly(const vector<double>& coeffs, double x){
    double result = 0;
    for(int i = 1; i < coeffs.size(); i++){
        result += coeffs[i] * pow(x, i);
    }
    return result;
}

int main() {
    vector<double> coefficients;
    double coeff;
    while (cin >> coeff){
        coefficients.push_back(coeff);
    }
    cout << find_zero(coefficients) << endl;
    return 0;
}