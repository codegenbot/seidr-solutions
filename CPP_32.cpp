double find_zero(const std::vector<double>& coeffs) {
    if(coeffs.size() % 2 != 0) return -1; // Return -1 if number of coefficients is odd
    double root = -coeffs[1]/(2*coeffs[0]); 
    return std::round(root);
}