double find_zero(vector<double> xs) {
    vector<double> coeffs;
    for (int i = 0; i < xs.size(); i++) {
        if (i == 1)
            continue;
        for (int j = i; j < xs.size(); j++) {
            if (j == i)
                coeffs.push_back(xs[i]);
            else
                coeffs.push_back(xs[j] * pow(-1, j - i));
        }
    }

    double x = -xs[1] / (2 * xs[0]);
    return poly(coeffs, x) == 0 ? x : 0;
}

double poly(vector<double> coeffs, double x) {
    double result = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(x, i);
    }
    return result;
}