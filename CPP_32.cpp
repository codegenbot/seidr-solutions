```cpp
int main() {
    int n; // Number of terms in the polynomial
    std::cin >> n;

    std::vector<double> coeffs(n); // Read coefficients
    for (int i = 0; i < n; i++) {
        double coeff;
        std::cin >> coeff;
        coeffs[i] = coeff;
    }

    double x; // Input value
    std::cin >> x;
    
    // Call poly function with input values
    double sum = poly(coeffs, x);
    std::cout << "The polynomial evaluation at x = " << x << " is: " << sum << std::endl;

    // Calculate the root using find_zero function
    double solution = find_zero(coeffs);

    return 0;
}