#include <vector>

int main() {
    std::vector<double> coeffs = {1.0, 2.0, 3.0};
    coeffs.push_back(4.0);

    double solution = find_zero(coeffs);

    assert(std::abs(poly(coeffs, solution)) < 1e-3);
    
    return 0;
}