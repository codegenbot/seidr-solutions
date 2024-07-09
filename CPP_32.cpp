#include <vector>
#include <cmath>

double poly(std::vector<double> coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> coeffs) {
    double x = 1.0;
    while (true) {
        double y = poly(coeffs, x);
        if (std::abs(y) < 1e-6) {
            return x;
        }
        x -= y / poly(std::vector<double>(coeffs.begin() + 1, coeffs.end()), x);
    }
}

int main() {
    int n; 
    std::cin >> n;

    std::vector<double> coeffs(n); 
    for (int i = 0; i < n; i++) {
        double coeff;
        std::cin >> coeff;
        coeffs[i] = coeff;
    }

    double x; 
    std::cin >> x;
    
    // Call poly function with input values
    double sum = poly(coeffs, x);
    std::cout << "The polynomial evaluation at x = " << x << " is: " << sum << std::endl;

    // Calculate the root using find_zero function
    double solution = find_zero(coeffs);

    return 0;
}