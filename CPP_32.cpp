double poly(vector<double> a, double x) {
    double sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i] * pow(x, i);
    }
    return sum;
}

double find_zero(vector<double> coeffs){
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