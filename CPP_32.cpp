```cpp
using namespace std;

std::vector<double> coeffs = vector<double>();

std::vector<double> polys;
double poly(std::vector<double>, double);

double find_zero(vector<double> xs) {
    double a = 1; // assuming coefficients start from 0th power
    double b = 0;
    for (int i = 0; i < coeffs.size(); i++) {
        if (i % 2 == 0)
            a += coeffs[i];
        else
            b -= coeffs[i] / pow((double)xs[0], i/2.0);
    }
    return -b / a;
}