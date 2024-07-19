#include <vector>
#include <cmath>

double find_zero(vector<double> coeffs) {
    double sum = 0;
    for (int i = 1; i < coeffs.size(); i += 2) {
        sum -= coeffs[i] / coeffs[0];
    }
    return -sum / coeffs[0];
}

int main() {
    vector<double> coeffs;
    // Read input from user
    for(int i=0;i<5;++i){
        double x;
        std::cin >> x;
        coeffs.push_back(x);
    }

    double solution = find_zero(coeffs);

    return 0;
}