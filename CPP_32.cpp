double poly(vector<double> orig_coeffs, double x) {
    double sum = 0;
    for (int i = 0; i < orig_coeffs.size(); i++) {
        sum += orig_coeffs[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs){
    vector<double> new_coeffs(coeffs); 
    double root = 1;
    double precision = 0.00001;

    while (true) {
        double poly_val = poly(new_coeffs, root);
        if (abs(poly_val) < precision)
            break;
        root -= poly_val / poly(new_coeffs, root);
    }
    return root;
}