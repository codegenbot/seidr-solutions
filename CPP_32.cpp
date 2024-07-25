double find_zero(vector<double> xs){
    if (xs.size() % 2 != 0) {
        return 0; // Invalid input, return 0
    }
    
    double max_coeff = 0;
    for (int i = 0; i < xs.size(); i++) {
        if (abs(xs[i]) > max_coeff) {
            max_coeff = abs(xs[i]);
        }
    }
    
    double result = -1;
    for (int i = 0; i < xs.size(); i++) {
        if (abs(xs[i]) == max_coeff) {
            result = -xs[i] / xs[i + 1]; // Considering xs[i + 1] is not 0
            break;
        }
    }
    
    return result;
}