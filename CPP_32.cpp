using namespace std;

std::vector<double> coeffs = vector<double>();

double poly(std::vector<double> c, double x) {
    double result = 0;
    for (int i = 0; i < c.size(); i++) {
        result += c[i] * pow(x, i);
    }
    return result;
}

double find_zero() {
    double a = coeffs[0];
    double b = 0;
    for (int i = 1; i < coeffs.size(); i += 2) {
        b -= coeffs[i] / poly(coeffs, (i - 1) / 2.0);
    }
    return -b / a;
}