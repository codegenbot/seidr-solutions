#include <iostream>
#include <vector>

double poly(double x, const std::vector<double>& coeffs) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); ++i) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(const std::vector<double>& xs) {
    double zero = xs[0];
    for (int i = 1; i < xs.size(); ++i) {
        if (poly(xs[i], {xs[j]/zero for j in range(i)}) == 0) {
            return xs[i];
        }
    }
    return -1;
}

int main() {
    std::vector<double> xs;
    // Read input from user
    // ...
    
    double solution = find_zero(xs);
    if (solution != -1) {
        std::cout << "The zero is: " << solution << std::endl;
    } else {
        std::cout << "No zero found." << std::endl;
    }
    return 0;
}