using namespace std;

std::vector<double> coeffs;
double poly(std::vector<double> coeff, double x) {
    double sum = 0;
    for (int i = 0; i < coeff.size(); i++) {
        sum += coeff[i] * pow(x, i);
    }
    return sum;
}

double find_zero(std::vector<double> xs) {
    double a = xs[0];
    double b = 0;
    coeffs = std::vector<double>();
    for (int i = 1; i < xs.size(); i += 2) {
        coeffs.push_back(-xs[i] / pow(xs[i-1], i/2.0));
    }
    return -b / a;
}