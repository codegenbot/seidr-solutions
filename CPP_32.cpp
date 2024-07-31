double find_zero(const vector<double>& coeffs) {
    if (coeffs.size() == 2) {
        return -coeffs[1] / coeffs[0];
    } else {
        // Use numerical methods (e.g., Newton's method) to find zero
        return 0; // Placeholder return value
    }
}