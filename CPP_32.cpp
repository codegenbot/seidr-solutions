vector<double> coeffs;

double poly(vector<double> coeffs, double root) {
    double result = 0;
    for(int i = 0; i < coeffs.size(); i++) {
        result += coeffs[i] * pow(root, i);
    }
    return result;
}

double find_zero(vector<double> coeffs) {
    double x1 = -10.0;
    double x2 = 10.0;

    while (true) {
        double p1 = poly(coeffs, x1);
        double p2 = poly(coeffs, x2);

        if (p1 * p2 < 0) {
            double x3 = (x1 + x2) / 2;
            double p3 = poly(coeffs, x3);

            if (abs(p3) < 0.001)
                return x3;

            if (p1 * p3 > 0)
                x1 = x3;
            else
                x2 = x3;
        }
        else
            return x1; // single root or no roots in the interval
    }
}

int main() {
    coeffs.resize(5);
    for(int i = 0; i < 5; i++)
        cin >> coeffs[i];
    double rootValue = 2.5; 
    double result = poly(coeffs, rootValue);
    solution = find_zero(coeffs);
    assert(abs(poly(coeffs, solution)) < 1e-3);
    return 0;
}