using namespace std;

vector<double> coeffs;
double poly(vector<double> v, double x) {
    double result = 0;
    for (int i = 0; i < v.size(); i++) {
        result += v[i] * pow(x, i);
    }
    return result;
}

double find_zero(vector<double> xs) {
    double a = xs[0];
    double b = 0;
    for (int i = 1; i < xs.size(); i += 2) {
        b -= xs[i] / pow(xs[i-1], i/2.0);
    }
    return -b / a;
}