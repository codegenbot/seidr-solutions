double find_zero(vector<double> xs){
    if (xs.size() % 2 != 0) throw invalid_argument("Input list must have an even number of coefficients");
    
    double max_coefficient = 0;
    for (double coef : xs) {
        if (abs(coef) > abs(max_coefficient)) {
            max_coefficient = coef;
        }
    }

    if (max_coefficient == 0) throw invalid_argument("Input list must have at least one non-zero coefficient");

    double root = -max_coefficient / xs[0];
    return root;
}