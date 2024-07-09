double poly(vector<double> coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        sum += coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs){
    vector<double> solution_coeffs(coeffs); 
    double root = 1;
    double precision = 0.00001;

    while (true) {
        double poly_val = poly(coeffs, root);
        if (abs(poly_val) < precision)
            break;
        root -= poly_val / poly(coeffs, root);
    }
    return root;
}